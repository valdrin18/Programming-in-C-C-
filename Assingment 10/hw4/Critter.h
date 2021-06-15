#include <iostream>
#ifndef CRITTER_H
#define CRITTER_H
using namespace std;
/* First C++ class */
class Critter
{
    //private data, variables
private:
    // data members are private
	string name;
	int hunger;
	int boredom;
	double height;
//public data,varibales and types of objects when called
//constructs
public: // business logic methods are public
	Critter();
	Critter(string);
	Critter(string,int,int,double=10);
    void setHunger(int newhunger); //setter
    int getHunger();
	void print();
};
#endif // CRITTER_H
