#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
//private data or variables
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	std::string color;

//public functions
public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setColor(std::string& newcolor);
	void setHeight(double height);
	// getter method
	int getHunger();
	// service method
	void print();
};
