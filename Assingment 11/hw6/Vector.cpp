#include <iostream>
#include "Vector.h"
#include <cmath>

using namespace std;

//vector class,setter,getter,copy
Vector::Vector(){}


void Vector::setSize(int n){
    size=n;
}

Vector::Vector(double *s){
    int i;
    ptr=new double[size];
    for(i=0; i<size; i++){
        ptr[i]=s[i];
    }
}

Vector::Vector(const Vector&s){
    int i;
    ptr=new double[size];
    for(i=0; i<size; i++){
        ptr[i]=s.ptr[i];
    }
}


Vector::~Vector(){
    cout<<"Destructor called"<<endl;
    delete[]ptr;
}
//func to print vector
void Vector::printV(){

    int i;
    for(i=0;i<size; i++){
        cout<<ptr[i]<<", ";
    }
    cout<<endl;
}
//set elements
void Vector::setEle(double *s){
    int i;
    ptr=new double[size];
    for(i=0; i<size; i++){
        ptr[i]=s[i];
    }
}
//getter
void Vector::getEle(double *s){
    int i;
    for(i=0; i<size; i++){
        s[i]= ptr[i];
    }
}
//to add elements
Vector Vector::addE(const Vector &a){
    Vector x;
    double *y;

    y= new double [size];
    int i;

    for(i=0; i<size; i++){
        y[i]=ptr[i]+a.ptr[i];
    }
        x.size=size;
        x.setEle(y);

        delete[]y;
        return x;
}
//the nord func
double Vector::norm(){
    double x=0,y;
    int i;
    for(i=0; i<size; i++){
        x+=ptr[i]*ptr[i];
    }

    y=sqrt(x);
    return y;
}

//operators

//difference
Vector Vector::difference(const Vector &a){
    Vector xx;
    double *y;

    y= new double [size];
    int i;
    for(i=0; i<size; i++){
        y[i]=ptr[i]- a.ptr[i];
    }
    xx.size=size;
    xx.setEle(y);

    delete[]y;
    return xx;
}
//product
double Vector::product(const Vector &a){
    double x=0;
    int i;
    for(i=0; i<size; i++){
        x+=ptr[i]*a.ptr[i];
    }
    return x;
}
