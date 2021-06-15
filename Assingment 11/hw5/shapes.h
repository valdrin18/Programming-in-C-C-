#ifndef SHAPES_H
#define SHAPES_H
#include <string>

using namespace std;

class Shape {           // base class
    private:                // private access modifier: could also be protected
        string name;   // every shape will have a name
    public:
        void setName(string& newname);//setter
        string getName();           // getter
        Shape(const string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape&);        // copy constructor
        void printName() const ;    //
};

class CenteredShape : public Shape {  // inherits from Shape
    private:
        double x,y;  // the center of the shape
    public:
        //setters
        void setX(double newx);
        void setY(double newy);
        //getters
        double getX();
        double getY();
        CenteredShape(const string&, double, double);  // usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape&);
        void move(double, double);  // moves the shape, i.e. it modifies it center
};
 // a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
    private:
        int EdgesNumber;  //private data
    public: //public data,cons,copy
        void setEdge(int newe);
        int getEdge();
        RegularPolygon(const string&, double, double, int);
        RegularPolygon();
        RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        //private data
        double Radius;
    public:
        //public data,setter,getter,cons,area,perimeter,..
        void setRadius(double newr);
        double getRadius();
        Circle(const string&, double, double, double);
        Circle();
        Circle(const Circle&);
        double perimeter();
        double area();
};
//rectangle class
class Rectangle : public RegularPolygon {
    private:
        //private data
        double width;
        double height;
    public:
        //public data,setters,getters,perimeter,area,cons,copy
        void setWidth(double neww);
        void setHeight(double newh);
        double getWidth();
        double getHeight();
        Rectangle();
        Rectangle(const string&, double, double, double, double);
        Rectangle(const Rectangle&);
        double perimeter();
        double area();
};
//square class
class Square : public Rectangle{
    private: //private data
        double side;
    public: //public data,setter,getter,area,perimeter,cons,copy
        void setSide(double news);
        double getSide();
        Square();
        Square(const string&, double, double, double);
        Square(const Square&);
        double perimeter();
        double area();
};
#endif
