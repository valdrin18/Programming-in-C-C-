/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

//class shape with its properties
class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);
        void setName(std::string& newname);
        std::string getName();
		void printName() const ;  	// prints the name
};

//inheritance class centeredshape with its properties
class CenteredShape : public Shape {  // inherits from Shape
	protected:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
        void setX(double xx);
        double getX();
        void setY(double yy);
        double getY();
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

//inheritance class regularpolygon with its properties
class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		void setEdge(int newedge);
		int getEdge();
		RegularPolygon(const RegularPolygon&);
};

//inheritance class circle with its properties
class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

//inheritance class Hexagon with its properties
class Hexagon:public RegularPolygon{
    private:
        std::string color;
        int side;
    public:
        //setter,getter,cons,decs,perimeter and area func
        Hexagon(const std::string&,double,double,int,std::string);
        Hexagon (const Hexagon&);
        ~Hexagon();
        void setColor(std::string newColor);
        void setSide(int newSide);
        std::string getColor();
        int getSide();
        int perimeter();
        double area();

};

#endif
