/* CH-230-A
  A10.p8(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include "Complex.h"
#include <cmath>
#include <iostream>

//used types of cases
Complex::Complex(){
    real=0;
    imaginary=0;
}

Complex::Complex(float r,float i){
    real=r;
    imaginary=i;
}

Complex::Complex(const Complex& x){
    real = x.real;
    imaginary = x.imaginary;
}

//functions here with their body and their operates
Complex::~Complex(){}

void Complex::setr(float r){
    real=r;
}

void Complex::seti(float i){
    imaginary=i;
}

float Complex::getr(){
    return real;
}

float Complex::geti(){
    return imaginary;
}

Complex Complex::con(){
    Complex a;
    a.real=real;
    a.imaginary=-(imaginary);
    return a;
}

Complex Complex::add(Complex x){
    Complex a;
    a.real=real+x.real;
    a.imaginary=x.imaginary+imaginary;
    return a;
}

Complex Complex::diff(Complex x){
    Complex a;
    a.real=x.real-real;
    a.imaginary=x.imaginary-imaginary;
    return a;
}

Complex Complex::prod(Complex x){
    Complex a;
    a.real=(real*x.real)-(imaginary*x.imaginary);
    a.imaginary=(imaginary*x.real)+(x.imaginary*real);
    return a;
}

//in the end printed them and used showpos/noshowpos for the sign
void Complex::print(){
    cout << noshowpos << real << showpos << imaginary << "i" << endl;
}
