#include <iostream>
#include "Complex.h"
using namespace std;
//main function
int main()
{
    //declared variables for two complex numbers
    double real1,real2,ima1,ima2;
    cout << "Enter first real part: ";
    cin>>real1;
    cout << "Enter first imaginary part: ";
    cin>>ima1;
    cout << "Enter second real part: ";
    cin>>real2;
    cout << "Enter second imaginary part: ";
    cin>>ima2;
    cout<<"proceeding.."<<endl<<endl;

    //now we put our values in different complex objects
    //and print them
    cout<<"Your complex numbers are: "<<endl;
    Complex n1(real1,ima1);
    Complex n2(real2,ima2);
    n1.print();
    n2.print();
    cout<<endl;

    //now we operate with our add,diff,prod,con
    //we basically now call every function
    //to see the outputs of the operations, we use print
    //refering the func with letter f1,f2..fn
    cout<<"Now we operate with them in the following: "<<endl;
    cout<<endl;
    Complex f1,f2,f3,f4,f5;

    //conjugate part
    f1=n1.con();
    f2=n2.con();
    cout<<"The conjuction of complex numbers is: "<<endl;
    f1.print();
    f2.print();
    cout<<endl;

    //additinon
    f3=n1.add(n2);
    cout<<"Addition is: "<<endl;
    f3.print();
    cout<<endl;

    //difference
    f4=n1.diff(n2);
    cout<<"Difference is: "<<endl;
    f4.print();
    cout<<endl;

    //product
    f5=n1.prod(n2);
    cout<<"Product is: "<<endl;
    f5.print();
    return 0;
}
