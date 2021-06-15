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
CenteredShape::CenteredShape(): Shape(){
    x = 0;
    y = 0;
}

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
RegularPolygon::RegularPolygon():CenteredShape(){
    EdgesNumber=4;
}

RegularPolygon::RegularPolygon(const RegularPolygon&rad){
    EdgesNumber = rad.EdgesNumber;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny){

    EdgesNumber = nl;
}

void RegularPolygon::setEdge(int newedge){
    EdgesNumber = newedge;
}

int RegularPolygon::getEdge(){
    return EdgesNumber;
}

//Circle class functions,constructors
Circle::Circle() : CenteredShape(){
    Radius = 2.5;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
    Radius = r;
}

Circle::Circle(const Circle&circle){
    Radius = circle.Radius;
}

void Circle::setRadius(double newr){
    Radius = newr;
}

double Circle::getRadius(){
    return Radius;
}

//used M_PI which represents the value of pi(3.14..)
//this worked by including also math library
//functions for perimeter and area
double Circle::perimeter(){
    return (2*M_PI*Radius);
}

double Circle::area(){
    return (M_PI*Radius*Radius);
}


//Rectangle class functions,constructors
Rectangle::Rectangle() : RegularPolygon(){
    width = 4;
    height = 3;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) :
    RegularPolygon(n,nx,ny,4)
{
    width = nwidth;
    height = nheight;
}

Rectangle::Rectangle(const Rectangle&rectangle){
    width = rectangle.width;
    height = rectangle.height;
}

void Rectangle::setWidth(double neww){
    width = neww;
}

double Rectangle::getWidth(){
    return width;
}

void Rectangle::setHeight(double newh){
    height = newh;
}

double Rectangle::getHeight(){
    return height;
}

double Rectangle::perimeter(){
    return 2*(width+height);
}

double Rectangle::area(){
    return (height*width);
}


//Square functions,constructs,area,perimeter
Square::Square(){
    side = 4;
}

Square::Square(const string& n, double nx, double ny, double nside) :
    Rectangle(n, nx, ny, nside, nside){

    side = nside;
}

Square::Square(const Square&square){
    side = square.side;
}

//setter and getter
void Square::setSide(double news){
    side = news;
}

double Square::getSide(){
    return side;
}

double Square::area(){
    return (side*side);
}

double Square::perimeter(){
    return 4*(side);
}

