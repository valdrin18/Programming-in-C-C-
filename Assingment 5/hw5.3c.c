/* CH-230-A
  A5.3(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//function to count lowercase characters
//used an if condition as represented
int count_lower(char *str){
    int idx,i,count=0;
    for (idx=0; idx<strlen(str); idx++){
        i=(int)str[idx];
        if(i>=97 && i<=122){
            count++;
        }
    }
    return count;
}

int main()
{   //declared string, and condition if we don't enter anything
    char string[50];
    printf("Enter string:");
    while(1){
        fgets(string,sizeof(string),stdin);
        if(string[0]=='\0');
        break;
    }
    //printed it.
    printf("There are %d lowercase characters in the string\n",count_lower(string));
    return 0;
}
