
/* CH-230-A
  A2.p8 8 Divisible by 2 and 7? (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    scanf("%d",&a);
    if (a%2==0&& a%7==0)
    {
    printf("The number is divisible by 2 and 7\n");
    }
    else
    {
    printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}
