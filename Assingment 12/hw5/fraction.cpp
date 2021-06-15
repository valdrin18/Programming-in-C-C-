/* CH-230-A
  A12.p5(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;
//cons,desc and other functions
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

ostream& operator<<(ostream& o,const Fraction& fr){
    o<<fr.num<<"/"<<fr.den<<endl;
    return o;
}

istream& operator>>(istream& i, Fraction& fr){
        i>>fr.num;
        i>>fr.den;

        if(fr.den==0){
            cout<<"Undefined fraction, re-try"<<endl;
        }
        return i;
}
//overloading for each operator
Fraction Fraction::operator*(Fraction &fr){
	Fraction pro;
	pro.num = this->num * fr.num;
	pro.den = this->den * fr.den;
	return pro;
}

Fraction Fraction::operator/(Fraction&fr){
	Fraction div;
	div.num = this->num * fr.den;
	div.den = this->den * fr.num;
	return div;
}


Fraction Fraction::operator+(Fraction &fr) {
    Fraction sum((this->num*lcm(this->den, fr.den)/this->den) + (fr.num*lcm(this->den, fr.den)/fr.den), lcm(this->den, fr.den));
    return sum;
}

Fraction Fraction::operator-(Fraction &fr) {
    Fraction dife((this->num*lcm(this->den, fr.den)/this->den) - (fr.num*lcm(this->den, fr.den)/fr.den), lcm(this->den, fr.den));
    return dife;
}

Fraction Fraction::operator=(Fraction &fr){
    this->num = fr.num;
    this->den = fr.den;
    return fr;
}
