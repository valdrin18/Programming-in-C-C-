#include "Rectangle.h"
#include <iostream>


//constructors,destructors, other functions

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
    std::cout << "calcArea of Rectangle..."; // message printed on the screen when calcArea method is called
	return length*width;
}

double Rectangle::calcPerimeter() const {
    std::cout << "calcPerimeter of Rectangle...";
	return 2*(length + width);
}
