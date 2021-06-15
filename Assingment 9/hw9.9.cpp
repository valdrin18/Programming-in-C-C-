/* CH-230-A
  A9.9(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <string.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

//main function
int main()
{
    //declared string with words to use
    string arr[]={"computer","television","keyboard","laptop",
                  "mouse","cook","tea","cap","keys","loop","map","tap","leaf",
                  "table","king","lemon","light"};

    //variables to use throughout
    int k,count;
    string s,r;

    while(1){


        //code to randomly pick one word
        srand(static_cast<unsigned int>(time(0)));
	    k=(rand()%17);
	    s = arr[k];
	    //condition to substitute vowels with "_"
        replace(s.begin(), s.end(), 'a', '_');
        replace(s.begin(), s.end(), 'e', '_');
        replace(s.begin(), s.end(), 'i', '_');
        replace(s.begin(), s.end(), 'o', '_');
        replace(s.begin(), s.end(), 'u', '_');
	   	//declaring string input from user
	   	cout<<"Guess this word: "<<s<<endl;
	   	string word;
	   	count=1;
    //continuous loop until word matches
    while(1){

        cout<<"enter word: ";
        cin>>word;
        if(word=="quit"){
            break;
        }
        //condition to check whether word matches
        else if (word!=arr[k]){
            cout<<"wrong, please re enter word: ";
            count++;
        }
        else{
            //corner case if checked by the first try
            if(count==1){
            cout<<"Woah, you got the word right in 1 try!"<<endl;
            }
            else{
                cout<<"Congrats, you got the word right with: "<<count<<" tries!"<<endl;
            }
            break;

        }
    }
    if(word=="quit"){
        cout<<"Exiting game"<<endl;
        break;

    }
    //after game,opportunity to replay if wanted
    cout<<"Play again? type 'yes' if so or 'quit' if not: ";
    //used this A thing to go to a specific location if not answer correct
    A:
    cin>>r;
    //respected every corner case here.
    if(r != "yes" && r!= "quit"){
        cout<<"Invalid input, re enter answer: ";
        goto A;
        }
    else if(r=="quit"){
        cout<<"Exiting game"<<endl;
        break;
    }
    }
    return 0;
}
