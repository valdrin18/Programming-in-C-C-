#include <iostream>
#include "Critter.h"
using namespace std;
int Critter::con(double hunger)
{
    return hunger*10;
}
double Critter::con_1(int hunger)
{
    return hunger*0.1;
}
//types of cases
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
    hunger=0;
    boredom=0;
    height=5;
}
Critter::Critter(string namee,int hungerr,int boredomm,double heightt){
    cout<<"Third constructor called"<<endl;
    name=namee;
    hunger=con_1(hungerr);
    boredom=boredomm;
    height=heightt;
}
//other functions and printing at the end
void Critter::setHunger(int newhunger) {
	hunger =  con_1(newhunger);
}
int Critter::getHunger(double newhunger) {
	return hunger;
}
void Critter::print(){
    cout<<"Name is: "<<name<<endl;
    cout<<"Hunger is: "<<con(hunger)<<endl;
    cout<<"Boredom is: "<<boredom<<endl;
    cout<<"Height is: "<<height<<endl;
}
