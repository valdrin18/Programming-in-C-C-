#include <iostream>
#ifndef CRITTER_H
#define CRITTER_H
using namespace std;
/* First C++ class */
class Critter
{
    //private data
private:
    // data members are private
	string name;
	double hunger;
	int boredom;
	double height;
	double lvl;
//public data and constructs
public: // business logic methods are public
	Critter();
	Critter(string);
	Critter(string,int,int,double=10);
	Critter(string,int,int,double,double);
    void setHunger(int newhunger); //setter
    int getHunger();
	void print();
};
#endif // CRITTER_H
