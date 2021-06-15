#include "Square.h"
#include <iostream>
//constructors,destructors, other functions
Square::Square(const char *n, double x):
    Area(n), Rectangle(n, x, x)
{
    s = x;
}

Square::~Square(){
}

double Square::calcArea() const {
    std::cout << "calcArea of Square...";
	return s*s;
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
	return 4*s;
}
