/* CH-230-A
  A8.p4 simple_arithmetics Compute Devision (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//main function
int main()
{
    //declared stack,count and n
    Stack s;
    s.count = 0;
    unsigned int n;
    scanf("%d",&n);
    //called function binary function from other file
    binary(&s,n);
    //printed in binary representation
    printf("The binary representation of %u is: ",n);
    while(s.count>0){
        printf("%d",pop(&s));
    }
    printf(".\n");
    return 0;
}
