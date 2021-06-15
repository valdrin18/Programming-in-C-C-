/* CH-230-A
  A9.5(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


//main function
int main()
{

    //decalred string to input as player name
    string name;
    cout<<"Enter name: ";
    cin>>name;
    int a=1;

    //used randomnumber to generate a random
    int randomNumber;
    int n,cnt=1;
    srand(static_cast < unsigned int>(time(0)));
    randomNumber=(rand()%17)+1;

    cout<<"Enter number to guess: ";

    //condition to check whether number matches the random one
    while(a){

        cin>>n;
        if (n<randomNumber){
            cout<<("Please proceed with a higher number")<<endl;
            cnt++;
        }
        else if(n>randomNumber){
            cout<<("Please proceed with a lower number")<<endl;
            cnt++;
        }
        else if(n==randomNumber){
            //corner case if player solves with 1 try
            if(cnt==1){
            cout<<"WOW!!, "<<name<<" got the number correct with "<<1<<" try"<<endl;
            }
            else{
            cout<<"Nice, "<<name<<" got the number correct with "<<cnt<<" tries"<<endl;
            }
        break;
        }
    }
    return 0;
}
