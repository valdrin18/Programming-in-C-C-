/* CH-230-A
  A11.1(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
#include <cstdlib>

using namespace std;

//main function
int main()
{
    //declared number of boxes n, parameters input
    int n,i;
    double height,width,depth;
    cout<<"Enter the number of boxes: ";
    cin>>n;
    cout<<"Proceeding with value inputs.."<<endl;
    cout<<endl;
    box *arr;
    arr=new box[2*n];

    //scanned them for n-boxes
    for(i=0; i<n; i++){

        cout<<"Height of box "<<i+1<<": ";
        cin>>height;
        arr[i].setHeight(height);

        cout<<" Width of box "<<i+1<<": ";
        cin>>width;
        arr[i].setWidth(width);

        cout<<" Depth of box "<<i+1<<": ";
        cin>>depth;
        arr[i].setDepth(depth);
        cout<<endl;
    }

    //copied the data of first boxes to values from n-2n
    for(i=n; i<(2*n); i++){
        arr[i]=box(arr[i-n]);
    }

    //printed the volume for each box
    cout<<"-The results of the volumes-"<<endl;
    cout<<endl;
    for(i=0; i<n; i++){
        cout<<"Volume of box "<<(i+1)<<" is: "<<arr[i].volume()<<endl;
    }
    cout<<endl<<"-When copy constructor is called-"<<endl;
    cout<<endl;

    for(i=n; i<(2*n); i++){
        cout<<"Volume of box "<<(i+1)<<" is: "<<(arr[i].volume())<<endl;
    }

    return 0;
}
