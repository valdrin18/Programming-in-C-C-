/* CH-230-A
  A11.p3(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

//main function
int main()
{
    //created,called,printed instances
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Wolf.\n";
    Wolf d;
    d.run();
    d.Fast();

    cout << "\nCreating a Dinosaur.\n";
    Dinosaur dino;
    dino.run();
    dino.Size1();

    return 0;
}
