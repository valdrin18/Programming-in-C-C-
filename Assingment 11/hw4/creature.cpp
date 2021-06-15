#include <iostream>
#include "Creature.h"
using namespace std;

//functions for creatures,cons,decs
Creature::Creature(): distance(10)
{}

Creature::~Creature(){}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{}

//functions for wizard,cons,decs

Wizard::~Wizard(){}
void Wizard::hover() const
{
    cout<<"Constructor called"<<endl;
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


Wolf::Wolf() : Period(2)
{}

//functions for wolf,cons,decs

Wolf::~Wolf(){}
void Wolf::Fast() const
{
    cout<<"Constructor called"<<endl;
    cout << "Wolves can go up to " << (distance/Period) << " meters per second!\n";
}

//functions for Dinosaur,cons,decs
Dinosaur::Dinosaur() : Size2(20)
{}
Dinosaur::~Dinosaur(){}
void Dinosaur::Size1() const
{
    cout<<"Constructor called"<<endl;
    cout << "The Dinosaur is " << Size2 << " meters long"<<endl;
    cout<<"It is like "<<distance<<" Humans big!\n"<<endl;
}
