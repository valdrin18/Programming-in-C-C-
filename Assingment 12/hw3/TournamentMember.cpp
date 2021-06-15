#include <iostream>
#include "TournamentMember.h"
using namespace std;

char TournamentMember::location[15]="London";

TournamentMember::TournamentMember(){
    cout<<"Default constructor"<<endl;
}

TournamentMember::~TournamentMember(){
    cout<<"Destructor called"<<endl;
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

void TournamentMember::LocationChange(const char* loch){
    int i;
    for(i=0; i<15; i++){
        location[i]=loch[i];
    }

}
//sorry for over 80 characters but the code is like this.

Player::~Player(){
    cout<<"Destructor called for player"<<endl;
}

Player::Player(const char* na,const char* ln, const char *d, double he,int a,int num,string p,int g,string lr):TournamentMember(na,ln,d,he,a){
    cout<<"Constructor for player called"<<endl;
    number=num;
    pos=p;
    goal=g;
    LOR=lr;
}

Player::Player(const Player& plr){
    cout<<"Copy constructor called"<<endl;
    int i;
    for(i=0; i<36; i++){
        name[i]=plr.name[i];
    }

    for(i=0; i<36; i++){
        lastname[i]=plr.lastname[i];
    }

    for(i=0; i<11; i++){
        date[i]=plr.date[i];
    }

    number=plr.number;
    pos=plr.pos;
    goal=plr.goal;
    LOR=plr.LOR;
}

void Player::GI(){
    goal++;
}

void TournamentMember::print(){
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Last name: "<<lastname<<endl;
    cout<<"Date: "<<date<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Loation: "<<location<<endl;
}
void Player::printp(){
    cout<<"Player Number: "<<number<<endl;
    cout<<"Position: "<<pos<<endl;
    cout<<"Goals: "<<goal<<endl;
    cout<<"Player is "<<LOR<<" footed"<<endl;
    cout<<endl;
}
