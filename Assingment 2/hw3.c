
/* CH-230-A
  A2.p3 Time calculation (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weeks;
    int days;
    int hours;
    printf("Write the number of weeks,days and hours:");
    scanf("%d",&weeks);
    getchar();
    scanf("%d",&days);
    getchar();
    scanf("%d",&hours);
    printf("Your total amount of hours is %d\n",weeks*168+days*24+hours);
    return 0;
}
