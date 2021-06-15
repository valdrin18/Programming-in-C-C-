/* CH-230-A
  A3.p1 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    int num2;
    beginning: //Beginning of code, upon condition
    scanf("%f",&num1);
    getchar();
    scanf("%d",&num2);//code to input values from keyboard
    if(num2>0) { //condition for valid and invalid inputs if not satisfied
    int idx;
    for (idx=1; idx<=num2;idx++) //main condition
        printf("%f\n",num1);
    }
    else{
    printf("invalid input, re enter the value:");
    }
    goto beginning;//return to beginning if code in invalid and does not work or if it worked perfectly.

    return 0;
}

