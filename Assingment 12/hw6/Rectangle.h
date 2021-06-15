#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Area.h"
//class with properties

class Rectangle : public virtual Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const; // method for calculating the perimeter
	private:
		double length;
		double width;
};

#endif
