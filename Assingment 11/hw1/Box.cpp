#include "Box.h"
#include <iostream>

//default constructor,destructor
box::box(){}
box::~box(){}

//constructor with input
box::box(double h,double w,double d){
    height=h;
    width=w;
    depth=d;
}

//copy constructor
box::box(const box& x){
    height=x.height;
    width=x.width;
    depth=x.depth;
}

//setter functions
void box::setHeight(double newh){
    height=newh;
}

void box::setWidth(double neww){
    width=neww;
}

void box::setDepth(double newd){
    depth=newd;
}

//getter functions
double box::getHeight(){
    return height;
}

double box::getWidth(){
    return width;
}

double box::getDepth(){
    return depth;
}

//function to calculate volume
double box::volume(){
    return height*width*depth;
}

