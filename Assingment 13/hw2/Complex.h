/* CH-230-A
  A13.2(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_

using namespace std;
class Complex{
    //private variables,data
private:
    int real;
    int imaginary;

public:
    //public variables,constructs,func operators
    Complex();
    Complex(int r, int i);
    Complex(const Complex&);
    ~Complex();
    void setr(int);
    void seti(int);
    int getr();
    int geti();
    Complex con();

    //overloading code part
    friend ostream&operator<<(ostream& o,const Complex& com);
    friend istream&operator>>(istream& i, Complex& com);
    Complex operator+(Complex&);
    Complex operator-(Complex&);
    Complex operator*(Complex&);
    Complex operator=(Complex&);
};


#endif // COMPLEX_H
