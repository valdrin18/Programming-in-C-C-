#include <iostream>
#include "fraction.h"


//cons and other functions
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

//overloading functions
std::ostream& operator<<(ostream& o,const Fraction& fr){
    o<<fr.num<<'/'<<fr.den;
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
