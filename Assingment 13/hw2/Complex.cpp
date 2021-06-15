/* CH-230-A
  A13.p2(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include "Complex.h"
#include <cmath>
#include <iostream>
using namespace std;

//used types of cases
Complex::Complex(){
    real=0;
    imaginary=0;
}

Complex::Complex(int r,int i){
    real=r;
    imaginary=i;
}

Complex::Complex(const Complex& x){
    real = x.real;
    imaginary = x.imaginary;
}

//functions here with their body and their operates
Complex::~Complex(){}

//setter and getters
void Complex::setr(int r){
    real=r;
}

void Complex::seti(int i){
    imaginary=i;
}

int Complex::getr(){
    return real;
}

int Complex::geti(){
    return imaginary;
}
//I left this here even though we did not call it
Complex Complex::con(){
    Complex a;
    a.real=real;
    a.imaginary=-(imaginary);
    return a;
}
//overload operators for the ones as asked from professor
ostream& operator<<(ostream& o, const Complex& com){
    o << noshowpos << com.real << showpos << com.imaginary << "i" << endl;
    return o;
}

istream& operator>>(istream& i, Complex& com){
    i>>com.real;
    i>>com.imaginary;
    return i;
}

Complex Complex::operator=(Complex& com){
    real=com.real;
    imaginary=com.imaginary;
    return com;
}

Complex Complex::operator+(Complex& com){
    Complex a;
    a.real= real+ com.real;
    a.imaginary= imaginary + com.imaginary;
    return a;
}

Complex Complex::operator-(Complex& com){
    Complex a;
    a.real= real- com.real;
    a.imaginary= imaginary - com.imaginary;
    return a;
}

Complex Complex::operator*(Complex& com){
    Complex a;
    a.real=(real*com.real)-(imaginary*com.imaginary);
    a.imaginary=(imaginary*com.real)+(com.imaginary*real);
    return a;
}
