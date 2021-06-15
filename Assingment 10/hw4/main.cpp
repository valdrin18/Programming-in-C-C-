/* CH-230-A
  A10.4(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <iostream>
#include "Critter.h"
using namespace std;
//main function
int main(int argc, char** argv)
{
    //string input, then the testcases
    string name;
    Critter a;
    Critter b(name);
    Critter c("Valdrin",1,2,3);
    Critter d("CornerCase",1,2);

    //called set
    a.setHunger(2);
    b.setHunger(2);
    c.setHunger(2);
    d.setHunger(2);

    //then print
    a.print();
    b.print();
    c.print();
    d.print();
    return 0;
}
