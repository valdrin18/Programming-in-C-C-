#include <iostream>
#include "Critter.h"
using namespace std;

//three types of objects
Critter::Critter(){
    cout<<"First constructor called"<<endl;
    name="default_critter";
    height=5;
    boredom=0;
    hunger=0;
}
Critter::Critter(string namee){
    cout<<"Second constructor called"<<endl;
    name="0";
    height=0;
    boredom=0;
    hunger=0;
}
Critter::Critter(string namee,int hungerr,int boredomm,double heightt){
    cout<<"Third constructor called"<<endl;
    name=namee;
    height=heightt;
    boredom=boredomm;
    hunger=hungerr;
}
//other functions
void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
int Critter::getHunger() {
	return hunger;
}
void Critter::print(){
    cout<<"Name is: "<<name<<endl;
    cout<<"Height is: "<<height<<endl;
    cout<<"Boredom is: "<<boredom<<endl;
    cout<<"Hunger is: "<<hunger<<endl;
}
