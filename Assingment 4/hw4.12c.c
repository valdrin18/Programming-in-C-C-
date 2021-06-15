/* CH-230-A
  A4.12(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//condition to check whether the element of string,
//can encounter the char element then replace by the other char.

void replaceAll(char *str, char c, char e){
    int i;
    for(i=0; i<strlen(str); i++){
        if(str[i]==c){
            str[i]=e;
        }
    }


}
//main code to create a string,two chars,scan them.
//Called the function to do the operation.
int main()
{
    char string[80],c1,c2;
    printf("Enter your string: ");
    while(1){
        fgets(string,sizeof(string), stdin);
        string[strlen(string)-1] = '\0';

        if(strcmp(string,"stop")==0){
            break;
        }
        printf("\nEnter the first element: ");
        scanf("%c", &c1);
		getchar();
		printf("Enter the second element: ");
		scanf("%c", &c2);

        printf("\n%c is changed to %c\n",c1,c2);

        printf("\nyour initial string was : %s\n",string);

        //after this the string is changed because of function.
        replaceAll(string,c1,c2);
        printf("your current string is: %s\n",string);
        getchar();
        printf("\nEnter another string or type stop to end the code: ");
    }

    return 0;
}
