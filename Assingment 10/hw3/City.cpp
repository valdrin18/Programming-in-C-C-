#include <iostream>
#include "City.h"

using namespace std;

//function section
City::City()
{
}

void City::setName(string &newname){
    name=newname;
}

void City::setNumber(int newnumber){
    number=newnumber;
}

void City::setMayor(string &newmayor){
    mayor=newmayor;
}

void City::setArea(double newarea){
    area=newarea;
}

string City::getname(){
    return name;
}

int City::getnumber(){
    return number;
}

string City::getmayor(){
    return mayor;
}

double City::getarea(){
    return area;
}

void City::print(){
    cout<<"Name of city: "<<name<<endl;
    cout<<"Population of city: "<<number<<endl;
    cout<<"Mayor of city: "<<mayor<<endl;
    cout<<"Area of city: "<<area<<endl;
}

