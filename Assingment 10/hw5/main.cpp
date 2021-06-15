/* CH-230-A
  A10.5(Cpp)
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
    string name="LOL";
    Critter a;
    Critter b(name);
    Critter c("Creature",1,2,3);
    Critter d("CornerCase",7,9,5);
    //print func called
    a.setHunger(2);
    b.setHunger(2);
    c.setHunger(2);
    d.setHunger(2);

    a.print();
    b.print();
    c.print();
    d.print();
    return 0;
}
