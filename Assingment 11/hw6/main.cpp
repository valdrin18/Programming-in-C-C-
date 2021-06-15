/* CH-230-A
  A11.p6(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;
//main function
int main()
{
    //declared number of elements for vector,pointer
    int num,i;
    double *p;
    cout<<"Enter number of elements for vector: ";
    cin>>num;

    //decalred two vectors and scanned elements for them
    Vector v1,v2;
    p = new double[num];
    cout<<"Vector 1:"<<endl;

    for(i=0; i<num; i++){
        cin>>p[i];
    }

    //used setsize for them
    v1.setSize(num);
    v2.setSize(num);
    v1.setEle(p);

    //same process for vector 2 also
    cout<< endl <<"Enter the second vector:"<<endl;
    for(i=0;i<num;i++){
        cin>>p[i];
    }
    v2.setEle(p);

    //deleted pointer in the end
    delete []p;

    //printed them and addition,diff,product
    cout<<"Addition:"<<endl;
    (v1.addE(v2)).printV();

    cout<<endl<<"Norm of first Vector:"<<endl;
    cout<<v1.norm()<<endl;

    cout<<endl<<"Substraction of vectors:"<<endl;
    (v1.difference(v2)).printV();

    cout<<endl<<"Scalar product of vectors:"<<endl;
    cout<<v1.product(v2)<<endl;

    return 0;
}
