/* CH-230-A
  A4.9(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//code to calculate highest and smallest value
int prodminmax(int arr[], int n) {
    int high,low,u;
    high = arr[0];
    for (u=1; u<n; u++){
        if(arr[u]>high) {
        high = arr[u];
        }
    }
    low= arr[0];
        for (u=1; u<n; u++){
            if(arr[u]<low) {
            low = arr[u];
            }
        }
    //code for highest and lowest numbers product
    int product;
    product= high*low;
    return product;
}


int main()
{
    //declared two variables and an array
    int num,i,*arr;
    printf("Enter number:");
    scanf("%d",&num);

    //memory allocation for array
    arr=(int*) malloc(sizeof(int)*num);
    if (arr==NULL){
        exit(1);
    }
    //giving values in array depending on num value
    printf("Enter the values:");
    for (i=0; i<num; i++){
            scanf("%d",&arr[i]);
    }
    //printing the product called in function
    printf("the product is %d",prodminmax(arr,num));

    //freeing array in the end
    free (arr);
    return 0;
}
