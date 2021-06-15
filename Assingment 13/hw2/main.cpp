/* CH-230-A
  A13.2(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
#include <fstream>
using namespace std;
//main function
int main()
{
    //created objects for getting data by files
    Complex c1,c2;
    ifstream f1,f2;
    ofstream f3;

    //opened files and checked if null
    f1.open("in1.txt");

    if(!f1.is_open()){
        cout<<"Error!"<<endl;
        exit(1);
    }
    //got the data inside the objects I created for both
    //and closed files after done with data getting
    f1>>c1;
    f1.close();

    f2.open("in2.txt");
    if(!f2.is_open()){
        cout<<"Error!"<<endl;
        exit(1);
    }
    f2>>c2;
    f2.close();

    //operating the sum,diff and product
    Complex cs=c1+c2;
    Complex cd=c1-c2;
    Complex cp=c1*c2;

    //opened the result file as output
    f3.open("output.txt");

    f3<<"Result of sum: "<<cs;
    f3<<"Result of differece: "<<cd;
    f3<<"Result of prodcut: "<<cp;

    //also printed in the terminal
    cout<<"Result of sum: "<<cs;
    cout<<"Result of differece: "<<cd;
    cout<<"Result of prodcut: "<<cp;

    f3.close();
    return 0;
}
