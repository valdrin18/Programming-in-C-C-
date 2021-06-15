/* CH-230-A
  A9.3(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>

using namespace std;

//functin to find absolute vale
float abss(float x){

    float a=x;
    cout<<"The absolute value of "<<x<<" is: ";
    if (x<0){
        a=(x*(-1));
    }
    return (a);
}

//main function where we also enter a float value
int main()
{
    float x;
    cout<<"Enter value of your number"<<endl;
    cin>>x;
    cout<<abss(x)<< endl;
    return 0;
}
