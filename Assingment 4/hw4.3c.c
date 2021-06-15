/* CH-230-A
  A4.3(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function to calculate sum
float sum1(float array[], int num) {
    float sum=0;
    for(int i=0; i<num; i++) {
        sum+= array[i];
    }
    return sum;
}
//function to calculate mean
float geometric_mean(float array[], int num){
    float msqrt=1;
    int i;
    float mean;
    for(i=0; i<num; i++) {
        msqrt = msqrt * array[i];
    }
    mean=pow(msqrt,(1.0/i));
    return mean;
}
//function to calculate minimum value
float minimum(float array[], int num)
{
    float low;
    low = array[0];
    for(int u=1; u<num; u++)
    {
        if(array[u]<low)
            low = array[u];

    }
    return low;
}
//function to calculate maximum value
float maximum(float array[], int num)
{
    float high;
    high = array[0];
    for(int u=1; u<num; u++)
    {
        if(array[u]>high)
            high = array[u];

    }
    return high;
}
//main function to input values, the validity, and char
int main()
{
    float array[15];
    int idx;
    float m;
    printf("Enter your values\n");
    for (idx=0; idx<15; idx++)
    {
        scanf("%f",&m);
        if (m<=0) {
        break;
        }
        array[idx]=m;
    }
        getchar();
        char c;
        printf("Enter a character:");
        scanf("%c",&c);
//switch statement to check the following cases
switch (c)
{
        case 'm':
            printf("Geometric mean=%f",geometric_mean(array,idx));
            break;

        case 'h':
            printf("highest value=%f", maximum(array,idx));
            break;

        case 'l':
            printf("Lowest value=%f", minimum(array,idx));
            break;

        case 's':
            printf("Sum=%f",sum1(array,idx));
            break;
}
  return 0;
}


