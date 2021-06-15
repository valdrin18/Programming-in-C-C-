/* CH-230-A
  A9.4(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>

using namespace std;

//count functin for integers
int mycount(int x,int y){
    return (y-x);
}

//count function for character in a string
int mycount(char ch, string s){
    int i,cnt=0;
    int a=s.length();
    for(i=0; i<a; i++){
        if (s[i]==ch){
            cnt++;
        }
    }
    return cnt;
}


//main function to check two types
int main()
{
    cout<<"Count is: "<<mycount('i',"This is a string")<<endl;
    //cout<<"Result is: "<<mycount(3,5)<<endl;
    return 0;
}
