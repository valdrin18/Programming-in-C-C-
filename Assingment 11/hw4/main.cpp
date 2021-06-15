/* CH-230-A
  A11.p4(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
#include <string.h>
using namespace std;

//main function
int main()
{
    //declared string for input by user
    string s;
    Creature c;
    cout<<"Enter one of these words:\n\n|wizard  | \n|wolf    | \n|dinosaur|"<<endl;
    cout<<endl;

    //continuous loop for to check whether string matches word
    //called each class if word corresponds to the class name
    while(1){
        cin>>s;
        if(s=="wizard"){
            cout << "\nCreating a Wizard.\n";
            Wizard *w= new Wizard();
            w->run();
            w->hover();
            delete w;
            cout<<endl;
            cout<<"Re-enter another word from above or 'quit' to quit ";
            cout<<endl;
        }

        else if(s=="wolf"){
            cout << "\nCreating a Wolf.\n";
            Wolf *d= new Wolf();
            d->run();
            d->Fast();
            delete d;
            cout<<endl;
            cout<<"Re-enter another word from above or 'quit' to quit ";
            cout<<endl;
        }

        else if(s=="dinosaur"){
            cout << "\nCreating a Dinosaur.\n";
            Dinosaur *dino= new Dinosaur();
            dino->run();
            dino->Size1();
            delete dino;
            cout<<endl;
            cout<<"Re-enter another word from above or 'quit' to quit ";
            cout<<endl;
        }

        else if(s=="quit"){
            cout<<"\nQuitting.\n";
            break;
        }

        else{
            cout<<"Wrong output, enter a valid word!"<<endl;
            continue;
        }
    }
    return 0;
}
