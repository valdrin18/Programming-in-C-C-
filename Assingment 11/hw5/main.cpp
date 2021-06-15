/* CH-230-A
  A11.p5(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;
//main function
int main(int argc, char** argv)
{
  //instances and printed them
  Rectangle rectangle("Creating a rectangle",3,4,1,3);
  Square square("Creating a square",4,4,5);
  Circle circle("Creating a circle",2,3,5);

  rectangle.printName();
  cout << "Perimeter = "<< rectangle.perimeter()<<endl;
  cout << "Area = " << rectangle.area() << endl;
  cout << endl;

  square.printName();
  cout << "Perimeter = "<< square.perimeter()<<endl;
  cout << "Area = " << square.area() << endl;
  cout << endl;

  circle.printName();
  cout << "Perimeter = "<< circle.perimeter()<<endl;
  cout << "Area = " << circle.area() << endl;
  cout << endl;

  return 0;
}
