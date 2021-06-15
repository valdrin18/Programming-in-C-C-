/* CH-230-A
  A3.p9 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

double sum25(double v[], int n)
{//condition to check for validity of element 2 and 5
//if they are, sum them.
    if (n>5)
    {
    double sum= v[2]+v[5];
    return sum;
    }
    else
    {
    return -111;
    }
}

int main()
{ //code to enter the value of num1, then as many times adding m values
    // used them in function above then.
    int num1;
    scanf("%d",&num1);
    double array[20];
    int idx;
    float result;
    for (idx=0; idx<num1; idx++)
    {
        float m;
        scanf("%f",&m);
        array[idx]=m;
    }
    result=sum25(array,num1);
    if (result==-111) {
        printf("One or both positions are invalid\n");
    }
    else{
        printf ("sum=%lf\n",result);
    }
    return 0;

}
