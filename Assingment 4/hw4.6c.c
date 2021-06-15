/* CH-230-A
  A4.6(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//created function with varibles
void greatest2(int str[],int i){
    int a,b,c,d;
    a=str[0];
    b=str[1];
    //code to check for two biggest values
    if (a<b) {
        c=a;
        a=b;
        b=c;
    }
    for (d=0; d<i; d++){
        if (str[d]>a){
            b=a;
            a=str[d];
        }
        else if (str[d]>b){
            b=str[d];
        }
    }
    printf("The two greatest numbers are: %d and %d\n",a,b);
}
int main()
{   //created array, used malloc.
    int n, *array,idx;
    printf("Dimension of array:");
    scanf("%d",&n);

    array=(int*) malloc(sizeof(int)*n);
    if (array==NULL) {
        exit(1);
    }

    for (idx=0; idx<n; idx++) {
        printf("Enter a[%d]:", idx+1);
        scanf("%d",&array[idx]);
        getchar();

    }
    //called function for two highest values
    greatest2(array,n);

    free(array);


    return 0;
}
