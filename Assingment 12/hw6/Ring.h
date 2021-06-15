#ifndef RING_H
#define RING_H
#include "Circle.h"
//class with properties

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const;
		double calcPerimeter() const; // method for calculating the perimeter
	private:
		double innerradius;
};

#endif
