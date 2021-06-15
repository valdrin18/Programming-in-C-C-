/* CH-230-A
  A5.6(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function to count values by pointer
int count(float *array){
    int idx;
    while(1){
        if(*(array+idx)>0){
            idx++;
        }
        else{
            break;
        }
    }
    return idx;
}

int main()
{
    //declared variables, memory allocated and called function
    int n,i;
    scanf("%d",&n);
    float *array;
    array=(float*)malloc(sizeof(float)*n);


    //for loop to scanf values until we reach n value we set.
    for (i=0; i<n; i++){
        scanf("%f",array+i);
    }
    printf("Before the first negative value: %d elements",count(array));
    return 0;
}
