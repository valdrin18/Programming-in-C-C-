/* CH-230-A
  A12.p2(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main()
{
    //declared arrays for name,lastname,date and other inputs
    char na[36];
    char Lname[36];
    char Da[11];
    double x;
    int y;

    TournamentMember M1("Drin","Smakaj","2002-07-13",1.87,18);
    //used setter methods for second one, as another way to fill
    //with data corresponding
    TournamentMember M2;
    cout<<"Enter name: "<<endl;
    cin>>na;
    cout<<"Enter last name: "<<endl;
    cin>>Lname;
    cout<<"Enter date in format: "<<endl;
    cin>>Da;
    cout<<"Enter height: "<<endl;
    cin>>x;
    cout<<"Enter age: "<<endl;
    cin>>y;

    //setnames in other way,changed location and printed them
    M2.setName(na);
    M2.setLastname(Lname);
    M2.setDate(Da);
    M2.setHeight(x);
    M2.setAge(y);

    TournamentMember M3(M2);

    cout<<"First Member is: "<<endl;
    M1.print();

    M2.LocationChange("Albania");
    cout<<"Second member: "<<endl;
    M2.print();

    cout<<"The copy of second member:"<<endl;
    M3.print();
    return 0;
}
