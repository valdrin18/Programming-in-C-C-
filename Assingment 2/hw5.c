/* CH-230-A
A3.p1(lanuage-C)
Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1;
    int num2;
    scanf("%f",&num1);
    beginning:
    scanf("%d",&num2);
    if(num2>0) {
    int idx;
    for (idx=1; idx<=num2;idx++)
        printf("%f\n",num1);
    }
    else{
    printf("Input is invalid, reenter value\n");
    goto beginning;
    }

    return 0;
}
//used beginning to start the code upon condition, and main conditions
