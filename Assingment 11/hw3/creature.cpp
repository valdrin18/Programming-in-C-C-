#include <iostream>
#include "Creature.h"
using namespace std;

//const value for creature
Creature::Creature(): distance(10)
{}

//called decs
Creature::~Creature(){
    cout<<"desc called"<<endl;
}
//run func
void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

//wizzard class func,desc,cons
Wizard::Wizard() : distFactor(3)
{}

Wizard::~Wizard(){
    cout<<"desc called"<<endl;
}
void Wizard::hover() const
{
    cout<<"Constructor called"<<endl;
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//wolf class functions,cons,decs
Wolf::Wolf() : Period(2)
{}

Wolf::~Wolf(){
    cout<<"desc called"<<endl;
}
void Wolf::Fast() const
{
    cout<<"Constructor called"<<endl;
    cout << "Wolves can go up to " << (distance/Period) << " meters per second!\n";
}

//dino class func,cons,decs
Dinosaur::Dinosaur() : Size2(20)
{}
Dinosaur::~Dinosaur(){
    cout<<"desc called"<<endl;
}
void Dinosaur::Size1() const
{
    cout<<"Constructor called"<<endl;
    cout << "The Dinosaur is " << Size2 << " meters long"<<endl;
    cout<<"It is like "<<distance<<" Humans big!\n"<<endl;
}
