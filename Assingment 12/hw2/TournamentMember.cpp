#include <iostream>
#include "TournamentMember.h"
using namespace std;

char TournamentMember::location[15]="London";

//constructors,destructor, other funcs
TournamentMember::TournamentMember(){
    cout<<"Default constructor"<<endl;
}

TournamentMember::~TournamentMember(){
    cout<<"Destructor"<<endl;
}

TournamentMember::TournamentMember(const char* na,const char* ln, const char *d, double he,int a){
    cout<<"Parametric Constructor"<<endl;
    int i;
    for(i=0; i<36; i++){
        name[i]=na[i];
    }

    for(i=0; i<36; i++){
        lastname[i]=ln[i];
    }

    for(i=0; i<11; i++){
        date[i]=d[i];
    }

    height=he;
    age=a;
}

TournamentMember::TournamentMember(const TournamentMember& TM){
    cout<<"Copy constructor"<<endl;
    int i;
    for(i=0; i<36; i++){
        name[i]=TM.name[i];
    }

    for(i=0; i<36; i++){
        lastname[i]=TM.lastname[i];
    }

    for(i=0; i<11; i++){
        date[i]=TM.date[i];
    }

    height=TM.height;
    age=TM.age;
}
//loc change and print function
void TournamentMember::LocationChange(const char* loch){
    int i;
    for(i=0; i<15; i++){
        location[i]=loch[i];
    }
}

void TournamentMember::print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Last name: "<<lastname<<endl;
    cout<<"Date: "<<date<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Loation: "<<location<<endl;
}




