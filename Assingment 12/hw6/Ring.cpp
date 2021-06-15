#include "Ring.h"
#include <iostream>
#include <cmath>

//constructors,destructors, other functions


Ring::Ring(const char *n, double outer, double inner)
					: Area(n), Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
    std::cout << "calcArea of Ring..."; // message printed on the screen when calcArea method is called
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const {
    std::cout << "calcPerimeter of Ring...";
	return (Circle::calcPerimeter()+
        (innerradius * 2 * M_PI));
}
