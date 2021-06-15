
/* CH-230-A
  A2.p7 Infinite loop by bad coding (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int i = 8;
    while (i >= 4){
    printf("i is %d\n", i);
    i--;
    }
    printf("That's it.\n");
    return 0;
}
// Had to use some wide brackets in beginning of loop and after the "i--".
