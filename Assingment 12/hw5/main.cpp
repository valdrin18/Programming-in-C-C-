#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	//created two fractions and a copy one
	Fraction a,b,c;
	cout<<"Enter fractions: "<<endl;
	cin>>a>>b;
	c=a;

    //called functions
    cout << "x > y = " << (a > b) << endl;
    cout << "x < y = " << (a < b) <<endl;
    cout<<"copy is: "<<c<<endl;
    cout << "Sum is " << a+b << endl;
    cout << "Difference is " << a-b << endl;
    cout << "Product is " << a*b << endl;
    cout << "div " << a/b << endl;
}
