/* CH-230-A
  A6.3(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//defined macros for minimum and maximum
//and final one for the midrange calculation
#define MIN1(a,b)(a<b ? a:b)
#define MAX1(a,b)(a>b ? a:b)
#define MIN2(a,b,c)(MIN1(MIN1(a,b),c))
#define MAX2(a,b,c)(MAX1(MAX1(a,b),c))
#define MID(a,b,c) ((MIN2(a,b,c)+MAX2(a,b,c))/2.0)

int main()
{
    //declared 3 integers and scanned them
    int num1,num2,num3;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    //float for midrange that calls the macro
    float midr;
    midr = MID(num1,num2,num3);

    //printed the float with percentage .6 places.
    printf("The mid-range is: %.6f\n", midr);
    return 0;
}
