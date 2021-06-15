/* CH-230-A
  A5.2(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function to divide values by 5
void divby5(float arr[], int size) {

    int idx;
    for (idx=0; idx<size; idx++){
        printf("%.3f ",arr[idx]/5);
    }
}

int main()
{   //declared i and array with elements
    int i=0;
    float array[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    printf("Before:\n");

    //printing them with decimal spaces as required
    while (i<=5){
        printf("%.3f ",array[i]);
        i++;
    }
    printf("\n");

    printf("After:\n");
    //called function
    divby5(array,6);

    while(i<=5){
    printf("%.3f ",array[i]);
    i++;
    }
    printf("\n");

    return 0;
}
