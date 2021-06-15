/* CH-230-A
  A9.6(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <iostream>

//functin to be called  if we call array with integers
int myfirst(int array[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        //conditin checked as required
        if(array[i]>0&&array[i]%2==0)
        {
            return array[i];
        }
    }
    //if condition is not satisfied
    return -1;
}
//functin to be called  if we call array with doubles
double myfirst(double array[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        //condition checked as required
        if(array[i]<0 && ((int) array[i]==(double) array[i]))
        {
            return array[i];
        }
    }
    //if not satisfied
    return -1.1;
}
//functin to be called  if we call array with chars
char myfirst(char a[],int n)
{
    //condition to count them.
    int i;
    for (i=0; i<n; i++)
    {   //it was a long loop and it passes more than 80 characters.
        //so I had to make it in shorter parts like this.
        if((a[i] != 65)&&(a[i] != 69)&&(a[i] != 73)&&(a[i] != 79)&&(a[i] != 85)
           &&(a[i] != 89)&&(a[i] != 97)&&(a[i] != 101)&&(a[i] != 105)&&(a[i] != 111)
           &&(a[i] != 117)&&(a[i] != 121))
        {
            return a[i];
        }
    }
    return '0';

}
using namespace std;

//main function, tested in all three forms
int main()
{
    int array1[7] {7,8,9,-3,0,4,6};
    double array2[5] {7.756,5.78,-4,-9.99,74.33};
    char array3[6] {'a','b','C','D','e','f'};

    cout <<myfirst(array1,7)<<endl;
    cout <<myfirst(array2,5)<<endl;
    cout <<myfirst(array3,6)<<endl;

    return 0;
}
