/* CH-230-A
  A13.8(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;
const char *a="This motor has problems";
//created class Motor (object of third class)
//class motor
class Motor {
    //public and private properties
public:
    Motor() {}

    const char *what()throw()
    {
        return a;
    }
    //desctructor
    ~Motor(){}
};
//class car with public properties only
class Car:public Motor {
public:
    Car(){}
    ~Car(){}
};
//this is used as to catch exception
//class garage
class Garage:public Car {
    //private and public data
private:
    string str;
public:
    Garage(string);
    Garage()try : Car(){
        //throw message as required from question
        throw Garage("The car in this garage has problems with the motor");
    }
    //catch part
    catch(Motor&mot){
        cerr << mot.what() << endl;
    }
};
//constructor with string parameter
Garage::Garage(string s){
    str=s;
    cout <<str<<endl;
}
//main function
int main()
{
    //used try/ catch method as required
    try{
        Garage gar;
    }

    catch(Garage&gar){
        cout << gar.what() << endl;
    }
    return 0;
}
