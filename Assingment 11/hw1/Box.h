#include <iostream>
#ifndef _BOX_H
#define _BOX_H

using namespace std;

//declared class
class box{

//private data
private:
    double height;
    double width;
    double depth;

//constructors,destructors,setters,getters,volume func
public:
    box();
    box(double,double,double);
    box(const box&);
    ~box();

    void setHeight(double newh);
    void setWidth(double neww);
    void setDepth(double newd);

    double getHeight();
    double getWidth();
    double getDepth();

    double volume();
};
#endif // BOX_H

