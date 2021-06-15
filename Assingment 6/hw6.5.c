/* CH-230-A
  A6.5(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//defined macro to find least bit
#define A(x) x&1

//function to count the shifts
unsigned int NUM(unsigned int n){
    int count=0;
    while(n){
        count++;
        n>>=1;
    }
    return count;
}

//main function
int main()
{

    //declared char to use it
    unsigned char ch;
    int i,reverse;

    scanf("%c",&ch);

    printf("The decimal representation is: %d\n",ch);
    printf("The backwards binary representation is: ");

    //for loop to print the number reverse in binary
    for(i=0; i<NUM(ch);i++){
        reverse=ch>>i;
        printf("%d",A(reverse));
    }
    printf("\n");


    return 0;
}
