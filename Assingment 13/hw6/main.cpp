/* CH-230-A
  A13.6(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //created vector as int as asked
    vector<int>vector1;
    int i=0;
    //made a while loop to store value of 8 20 times
    while(i<20){
        vector1.push_back(8);
        i++;
    }
    //tried to put the 21th as asked
    try{
        vector1.at(21);
    }
    //the catch condition using out_of_range
    catch(out_of_range& out){
        cerr<<"<<<<Error>>>>  "<<out.what()<<endl;
    }
    return 0;
}
