/* CH-230-A
  A10.7(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

//naive string class
class NaiveString {
private:
    //private data
	char *str;
public:
    //public constructs,destructs,data
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
	~NaiveString();
};
//func to make an object using data from private in class
NaiveString::NaiveString(const char* t) {
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

NaiveString::~NaiveString() {
	cout<<"Called destructor"<<endl;
	delete[] str;
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/

//func to copy data from previous object in another new one
NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}
//function to replace by value
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}
//function to replace by reference

void funcByRef(NaiveString &s) {
    cout<<"function by reference called"<<endl;
    s.update('B', 'C');
	s.print();
}
//main function
int main(int argc, char** argv)
{
	//we got two strings and we test by calling
	//in both types of functions
	NaiveString a("aBcBdB");
	NaiveString b(a);
	a.print();
	b.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	cout<<"About to call function by reference"<<endl;
	funcByRef(a);
	a.print();
	b.print();

	return 0;
}
