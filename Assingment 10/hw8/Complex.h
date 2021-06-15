#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_

using namespace std;
class Complex{
    //private variables,data
private:
    float real;
    float imaginary;

public:
    //public variables,constructs,func operators
    Complex();
    Complex(float r, float i);
    Complex(const Complex&);
    ~Complex();
    void setr(float);
    void seti(float);
    float getr();
    float geti();
    Complex con();
    Complex add(Complex);
    Complex diff(Complex);
    Complex prod(Complex);
    void print();
};


#endif // COMPLEX_H
