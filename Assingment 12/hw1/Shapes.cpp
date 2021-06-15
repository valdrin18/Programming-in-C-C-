#include "Shapes.h"
#include <iostream>
#include <cmath>


using namespace std;

//shape class functions,constructors
Shape::Shape(){}

Shape::Shape(const string&n) : name(n) {}

Shape::Shape(const Shape&sha){
    name=sha.name;
}

void Shape::setName(string&newname){
    name = newname;
}

string Shape::getName(){
    return name;
}

void Shape::printName() const {
    cout << name << endl;
}

//Centered shape class as inheritence from shape class
CenteredShape::CenteredShape(){}

CenteredShape::CenteredShape(const string&n,double nx,double ny):Shape(n){
    x = nx;
    y = ny;
}

CenteredShape::CenteredShape(const CenteredShape&csha){
    x = csha.x;
    y = csha.y;
}

//setter and getter for x val
void CenteredShape::setX(double xx){
    x = xx;
}

double CenteredShape::getX(){
    return x;
}

//setter and getter for y val
void CenteredShape::setY(double yy){
    y = yy;
}

double CenteredShape::getY(){
    return y;
}

//RegularPolygon class functions,constructs
RegularPolygon::RegularPolygon(){}

RegularPolygon::RegularPolygon(const RegularPolygon&rad){
    EdgesNumber = rad.EdgesNumber;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny){

    EdgesNumber = nl;
}
//setter,getter
void RegularPolygon::setEdge(int newedge){
    EdgesNumber = newedge;
}

int RegularPolygon::getEdge(){
    return EdgesNumber;
}

//Circle class functions,constructors
Circle::Circle(){}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
}

Circle::Circle(const Circle&circle){
    Radius = circle.Radius;
}

//hexagon class functions,copy cons,cons and desc

Hexagon::Hexagon(const std::string& n,double nx,double ny,int s,string col):
RegularPolygon(n,nx,ny,6)
{
    side=s;
    color=col;
}

Hexagon::Hexagon(const Hexagon& h){
    color=h.color;
    side=h.side;
    name=h.name;
    x=h.x;
    y=h.y;
}

Hexagon::~Hexagon(){
    cout<<"destructor called"<<endl;
}
//here we have setters and getters
void Hexagon::setSide(int newSide){
    side=newSide;
}

int Hexagon::getSide(){
    return side;
}

void Hexagon::setColor(string newColor){
    color=newColor;
}

string Hexagon::getColor(){
    return color;
}
//function for perimeter
int Hexagon::perimeter(){
    return 6*side;
}
//function for area
double Hexagon::area(){
    double are,tot;
    are=((sqrt(3)*3)/2);
    tot=side*side;
    return are*tot;
}
