/* CH-230-A
  A3.p8 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

float array[10];

float sum1(float array[]) {
    float sum=0;//initialized sum as 0
    for(int i=0; i<=10; i++) { //main code for sum, setting i to limit of 10
        sum+= array[i];
    }
    return sum;
}
float average1(float a[],int i){//code for calculating average
    float average=sum1(a)/(i + 1);
    return average;
}


int main()
{//declared a,b for sum and average,idx for scaning m values
    int idx;
    float a,b;
    for (idx=0; idx<10; idx++)
    {
        float m;
        scanf("%f",&m);
        array[idx]=m;
        if (m==-99) {
        break;
        }
    a=sum1(array);
    b=average1(array,idx);
    }
    printf("%f %f",a,b);

    return 0;
}

