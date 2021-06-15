/* CH-230-A
  A13.1(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
  //declared files to write and read
  ifstream f;
  ofstream cpy;
  string path;
  string cpypath;
  //string as file input name
  string x;
  cout << "Enter file name: ";
  getline(cin, path);
  //opened other file, deleted part and added the _copy part
  f.open(path);
  cpypath=path.erase(path.size()-4,4);
  cpypath=cpypath+"_copy.txt";
  cpy.open(cpypath);
  //code to get the info and put it in the other file
  while(!f.eof()){
      getline(f,x);
      cpy<<x<<endl;
    }
  //closed the files
  f.close();
  cpy.close();

  return 0;
}
