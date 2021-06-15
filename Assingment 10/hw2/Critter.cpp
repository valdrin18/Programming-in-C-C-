#include <iostream>
#include "Critter.h"

using namespace std;
//function section
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setColor(string& newcolor) {
	color = newcolor;
}

void Critter::setHeight(double newheight){
    height=newheight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger;
	cout << ". My color is "<<color<< ". My height is "<<height;
}

int Critter::getHunger() {
	return hunger;
}
