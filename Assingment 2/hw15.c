
/* CH-230-A
  A2.p9 Categorization of characters (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c",&x);
    if(x>='A' && x<='Z') {
        printf("%c is a letter\n",x);
    }
    else if(x>='a'&& x<='z') {
        printf("%c is a letter\n",x);
    }
    else if(x>='0'&& x<='9') {
        printf("%c is a digit\n",x);
    }
    else {
        printf("%c is some other symbol\n",x);
    }
    return 0;
}
// used if conditions, set the range for values which if they satisfied the condition, the print was executed
