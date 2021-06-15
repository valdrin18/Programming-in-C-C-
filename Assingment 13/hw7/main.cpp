/* CH-230-A
  A13.7(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <exception>
using namespace std;

//created class as guided
class OwnException{
//private and public data
private:
    string str;
public:
    OwnException(string);
    //used throw to what and added a return
    const char *what() throw(){
         return "OwnException\n";
    }
    //destructor
    ~OwnException()throw(){}
};
//constructor to get string
OwnException::OwnException(string nstr){
    str=nstr;
    cout<<str<<endl;
}
//throw functions for different cases
void throww(int n){
    switch(n){
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
        break;
    case 3:
        throw true;
    default:
        throw OwnException("Default case exception");
    }
}
//main function
int main()
{
    //declared 4 variables to basically call each
    //condition
    int a,b,c,d;
    a=1,b=2,c=3,d=4;
    //for each, did the throw and catch process
    try{
        throww(a);
    }
    catch(char ch){
        cerr<<"Caught in main: "<<ch<<endl;
    }

    try{
        throww(b);
    }
    catch(int n){
        cerr<<"Caught in main: "<<n<<endl;
    }

    try{
        throww(c);
    }
    catch(bool b){
        cerr<<"Caught in main: "<<b<<endl;
    }
    try{
        throww(d);
    }
    catch(OwnException& own){
        cerr<<"Caught in main: "<<own.what()<<endl;
    }
    return 0;
}
