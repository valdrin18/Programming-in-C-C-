/* CH-230-A
  A12.p3(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main()
{

    //created instances and changed their location
    Player plr1("Drin","Smakaj","2002-07-13",1.87,18,10,"Attack",5,"left");
    Player plr2("A","AA","2000-12-12",1.66,20,8,"Defend",2,"Right");
    Player plr3("B","BB","1999-05-20",1.90,21,16,"Mid",4,"Right");


    plr1.LocationChange("Hamburg");
    plr2.LocationChange("Hamburg");
    plr3.LocationChange("Hamburg");

    //for goal increases and printed all the instances
    plr1.GI();
    plr2.GI();
    plr3.GI();

    cout<<endl<<"First player: "<<endl;
    plr1.print();
    plr1.printp();
    cout<<endl<<"Second player: "<<endl;
    plr2.print();
    plr2.printp();
    cout<<endl<<"third player: "<<endl;
    plr3.print();
    plr3.printp();
    return 0;
}
