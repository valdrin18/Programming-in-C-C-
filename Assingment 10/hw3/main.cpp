/* CH-230-A
  A10.3(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;
//main funtion
int main(int argc, char** argv)
{
    //declared parameters
    string name, mayor;
	int number;
	double area;
//infos by input
    //info for the first city
    City ONE;

        cout << "Please enter the data for the first city:" << endl;
        getline(cin, name);
        ONE.setName(name);
        cin >> number;
        ONE.setNumber(number);
        cin >> mayor;
        ONE.setMayor(mayor);
        cin >> area;
        ONE.setArea(area);

        cout << "You have created:" << endl;
        ONE.print();

	//info for the second city
	City TWO;

        cout << "Please enter the data for the second city:" << endl;
        getline(cin >>ws, name);
        TWO.setName(name);
        cin >> number;
        TWO.setNumber(number);
        cin >> mayor;
        TWO.setMayor(mayor);
        cin >> area;
        TWO.setArea(area);

        cout << "You have created:" << endl;
        TWO.print();

	//info for third city
	City THREE;

        cout << "Please enter the data for the third city:" << endl;
        getline(cin >>ws, name);
        THREE.setName(name);
        cin >> number;
        THREE.setNumber(number);
        cin >> mayor;
        THREE.setMayor(mayor);
        cin >> area;
        THREE.setArea(area);

        cout << "You have created:" << endl;
        THREE.print();

    return 0;
}
