/* CH-230-A
  A2.p10 days and hours (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("Enter a value:\n");
    beginning:
    scanf("%d",&a);
    int b=2;
    if (a>0) {
        printf("1 day=24 hours\n");
    while(b<=a) {
    printf("%d days=%d hours \n",b,b*24);
    b++;
    }
    }
    else {
    printf("invalid value, please re-enter:");
    }
    goto beginning;

    return 0;
}
// used the if condition for when value is 1 to print day instead of days, then else if 0 or any other value that does not satisfy the while condition, print re-enter.

