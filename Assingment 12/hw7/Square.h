#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"


//class with properties
class Square : public Rectangle
{
    public:
        Square(const char *n, double a);
        ~Square();
        double calcArea() const;
		double calcPerimeter() const;

    private:
        double s;
};

#endif // SQUARE_H
