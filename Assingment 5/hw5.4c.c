/* CH-230-A
  A5.4(lanuage-C)
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
{   //declared variables and array
    int i,n;
    scanf("%d",&n);

    float *array;
    //memory allocated it.
    array =(float*)malloc(sizeof(float)*n);

    for(i=0; i<n; i++){
    scanf("%f",&array[i]);
    }

    printf("Before:\n");

    //printed it with decimal place as required
    for (i=0; i<n; i++){
        printf("%.3f ", array[i]);
		}

    //called function
    printf("\nAfter:\n");
    divby5(array,n);


    //freed array
    free(array);

    return 0;
}
