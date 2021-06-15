/* CH-230-A
  A4.2(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>

int main()
{//declared string for entering text in it
    char string[50];
    fgets(string,sizeof(string),stdin);
    int idx=0;

//main loop to check validity and bringing a part to the front
    while(idx<strlen(string)-1) {
        if (idx%2==1) {
           printf(" %c\n",string[idx]);
        }
        else if (idx%2==0) {
         printf("%c\n",string[idx]);
        }
        idx++;

    }
    return 0;
}
