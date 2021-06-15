/* CH-230-A
  A10.(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

//main function
int main(int argc, char** argv)
{
	Critter c;

	//decalred parameters to give
	string name;
	int hunger;
	double height;
	string color;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);

	//set inputs
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout<<"Color: ";
	cin>>color;
	c.setColor(color);

	cout<<"Height: ";
	cin>>height;
	c.setHeight(height);

	cout << "You have created:" << endl;
	c.print();
    return 0;
}
