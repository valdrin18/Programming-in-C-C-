#ifndef CIRCLE_H
#define CIRCLE_H
#include "Area.h"
//class with properties

class Circle : public virtual Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const; // method for calculating the perimeter
	private:
		double radius;
};

#endif
