#include <iostream>
#include "Critter.h"
using namespace std;

//types of cases
Critter::Critter(){
    cout<<"First constructor called"<<endl;
    name="default_critter";
    height=5;
    boredom=0;
    hunger=0;
    lvl=hunger;
}
Critter::Critter(string namee){
    cout<<"Second constructor called"<<endl;
    name="0";
    hunger=0;
    boredom=0;
    height=5;
    lvl=hunger;
}
Critter::Critter(string namee,int hungerr,int boredomm,double heightt){
    cout<<"Third constructor called"<<endl;
    name=namee;
    hunger=(double)hungerr/10;
    boredom=boredomm;
    height=heightt;
    lvl=hunger;
}

Critter::Critter(string namee,int hungerr,int boredomm,double heightt,double lvll){
    cout<<"Forth constructor called"<<endl;
    name=namee;
    hunger=(double)hungerr/10;
    boredom=boredomm;
    height=heightt;
    lvl=lvll=hunger;
}
//other functions and printing at the end
void Critter::setHunger(int newhunger) {
	hunger = (double)newhunger/10;
}
int Critter::getHunger() {
	return (int)hunger*10;
}
void Critter::print(){
    cout<<"Name is: "<<name<<endl;
    cout<<"Hunger is: "<<(int)(hunger*10)<<endl;
    cout<<"Boredom is: "<<boredom<<endl;
    cout<<"Height is: "<<height<<endl;
    cout<<"Level of hunger: "<<lvl<<endl;
}
