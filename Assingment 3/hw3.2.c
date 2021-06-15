/* CH-230-A
  A3.p2 (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num1;
    int num2;
    scanf("%c",&num1);
    getchar();
    scanf("%d",&num2);
    printf("%c\n",num1);
    for (int idx=num2; idx>0; idx--)
    {
    printf("%c-%d\n",num1,idx);
    }

    return 0;
}
