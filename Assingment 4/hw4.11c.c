/* CH-230-A
  A4.11(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//function to check the case insensitive letters
int count_insensitive(char *str, char c)
{   //declared number n for the loops and count to increase
    int n,count=0;
    for(n=0; n<strlen(str); n++){
        if(tolower(c)==tolower(str[n])){
            count++;
        }
    }
    return count;
}

int main()
{   //declared 2 strings, and memory allocated both
    char *string1,*string2;

    string1= (char*) malloc(sizeof(char)*50);
    fgets(string1,50,stdin);

    if(string1==NULL){
        exit(1);
    }

    string2=(char*) malloc(sizeof(char)*strlen(string1));

    //copied string1 in string2
    strcpy(string2,string1);

    //freed the first string
    free(string1);


    //printed the characters calling functions as well to show the occurrence
    printf("Character %c is %d times:\n",'b',count_insensitive(string2,'b'));
    printf("Character %c is %d times:\n",'H',count_insensitive(string2,'H'));
    printf("Character %c is %d times:\n",'8',count_insensitive(string2,'8'));
    printf("Character %c is %d times:\n",'u',count_insensitive(string2,'u'));
    printf("Character %c is %d times:\n",'$',count_insensitive(string2,'$'));

    //freed the second string
    free(string2);

}
