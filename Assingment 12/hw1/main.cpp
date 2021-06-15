/* CH-230-A
  A12.p1(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
using namespace std;
//main func
int main()
{
    //three instances,called their perimeter and area
    Hexagon h1("Hexagon 1",0,0,9,"blue");
    Hexagon h2("Hexagon 2",0,0,15,"green");
    Hexagon h3(h2);

    cout<<"Data for Hexagon 1: "<<endl;
    cout<<"Perimeter: "<<h1.perimeter()<<endl;
    cout<<"Area: "<<h1.area()<<endl;

    cout<<"Data for Hexagon 2: "<<endl;
    cout<<"Perimeter: "<<h2.perimeter()<<endl;
    cout<<"Area: "<<h2.area()<<endl;

    cout<<"Data for Hexagon 3(copy cons): "<<endl;
    cout<<"Perimeter: "<<h3.perimeter()<<endl;
    cout<<"Area: "<<h3.area()<<endl;

    return 0;
}
