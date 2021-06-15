#include <iostream>
#ifndef CITY_H
#define CITY_H

//class
using namespace std;
class City
{
    //private data,variables
private:
    string name;
    int number;
    string mayor;
    double area;

    //public data,functions
public:
    City();
    void setName(string &newname);
    void setNumber(int newnumber);
    void setMayor(string &newmayor);
    void setArea(double newarea);

    string getname();
    int getnumber();
    string getmayor();
    double getarea();

    void print();

};

#endif // CITY_H
