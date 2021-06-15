/* CH-230-A
  A3.p4 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{  //code to input char and n values, according to it, prints m values
    //code to measure sum and mean after we enter m
    char c;
    scanf("%c",&c);
    int n;
    scanf("%d",&n);
    double array[n];
    float sum=0;
    float mean=0;
    int idx;
    for (idx=0; idx<n; idx++)
    {
        double m;
        scanf("%lf",&m);
        sum=sum+m;
        mean=sum/m;
        array[idx]=m;
    }

    switch (c)  //used switch to set condition for what we ask as a char
    {
    case 's':
        printf("%f",sum);
        break;
    case 'p':
        for (idx=0; idx<n; idx++)
        {
            printf("%lf\n",array[idx]);
        }
        break;
    case 't':
        printf("%f",(float)9/5*array[n]+32); //to covert Celsius to Fahrenheit
        break;
    default:
        printf("%lf",mean);
    }

    return 0;
}
