/* CH-230-A
  A13.3(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include <fstream>
using namespace std;
//main function
int main()
{
    int n,i;
    cout<<"How many?"<<endl;
    cin>>n;
    ifstream iff,ff;
    ofstream f;
    f.open("concatn.txt");
    if(!f.is_open()){
        cout<<"ERROR"<<endl;
        exit(1);
    }

    for(i=0; i<n; i++){
        string str;
        cin>>str;

        iff.open(str);
        if(!iff.is_open()){
            cout<<"ERROR"<<endl;
            exit(1);
        }
        iff.seekg(0,ios::end);
        int l=iff.tellg();
        iff.seekg(0);
        char *buf=new char[l];
        f.write(buf,l);
        iff.read(buf,l);
        char bn='\n';

        f.write(&bn,sizeof(bn));
        delete [] buf;
        iff.close();
    }
    f.close();
    ff.open("concatn.txt");
    if(!ff.is_open()){
        cout<<"Error"<<endl;
        exit(1);
    }
    cout<<ff.rdbuf();
    ff.close();
    return 0;
}
