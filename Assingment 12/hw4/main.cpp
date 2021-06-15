/* CH-230-A
  A12.p4(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	//instances and also input one
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    Fraction x,y,z;
    cin>>x;
    cout<<x<<endl<<"Enter two fraction nums: "<<endl;
    cin>>y>>z;
    cout<<y*z<<endl<<y/z<<endl;
}
