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
//public data and constructs
public: // business logic methods are public
	Critter();
	Critter(string);
	Critter(string,int,int,double=10);
    void setHunger(int newhunger); //setter
    int getHunger(double newhunger);
    int con(double hunger);
    double con_1(int hunger);
	void print();
};
#endif // CRITTER_H
