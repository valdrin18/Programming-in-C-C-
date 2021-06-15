/* CH-230-A
  A9.p2(lanuage-Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <iostream>

using namespace std;
//main function
int main()
{
    //declared values as required
    int n,i;
    double x;
    string s;
    //read them from keyboard
    cout<<"Enter integer number"<<endl;
    cin>>n;
    cout<<"Enter double value"<<endl;
    cin>>x;
    cout<<"Enter your string"<<endl;
    cin>>s;

    //used for loop and printed everything
    for(i=0; i<n; i++){
        cout<<s<<":"<<x<<endl;
    }
    return 0;
}
