/* CH-230-A
  A10.6(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"
using namespace std;

//main function
int main(int argc, char** argv)
{
    //declared string
    //used test cases
    string name;
    Critter a;
    Critter b(name);
    Critter c("Creature",1,2,3);
    Critter d("CornerCase",7,9);
    Critter e("Test",5,6,17);

    //set func
    a.setHunger(2);
    b.setHunger(2);
    c.setHunger(2);
    d.setHunger(2);
    e.setHunger(2);

    //print func called
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();
    return 0;
}
