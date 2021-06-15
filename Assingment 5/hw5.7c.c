/* CH-230-A
  A5.7(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //declared two strings
    char string1[100],string2[100],*str,l;
    fgets(string1,sizeof(string1),stdin);
    fgets(string2,sizeof(string2),stdin);

    //removed last character which means the end
    string1[strcspn(string1,"\n")]=0;
    string2[strcspn(string2,"\n")]=0;

    //concatenated them
    strcat(string1,string2);

    //used l for it's string
    l=strlen(string1);

    //memory allocated the length l
    str=(char*)malloc(sizeof(char)*l);

    //copied string1 into str
    strcpy(str,string1);

    //condition if null
    if(str==NULL){
        exit(1);
    }
    else{
    //printed str
    printf("Result of concatenation: %s\n",str);
    }

    //free the str
    free(str);
    return 0;
}
