/* CH-230-A
  A3.p11 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //declared char values for arrays, character, lengths and compararison
    char one [100];
    char two[100];
    char three[100];
    char c;
    char*src;
    int l1,l2,compare;

    fgets(one,sizeof(one),stdin);
    fgets(two,sizeof(two),stdin);
    scanf("%s",&c);

    one[strcspn(one,"\n")]=0;
    two[strcspn(two,"\n")]=0;


    l1=strlen(one);
    l2=strlen(two);
    compare=strcmp(one,two);
    src= strchr(two,c);
//printed lengths, concatenation, and copied array 2 on three
    printf("length1=%d\n",l1);
    printf("length2=%d\n",l2);
    printf("concatenation=%s\n",strcat(one,two));
    printf("copy=%s\n",strcpy(three,two));
//compare to check if they are the same or one is bigger than other, 3 states
    if (compare>0) {
        printf("one is larger than two\n");
    }
    else if (compare<0) {
        printf("one is smaller than two\n");
    }
    else {
        printf("one is equal to two\n");
    }
//code to check for character in array 2.
    if (src){
        printf("position=%ld\n",src-two);
    }
    else {
        printf("The character is not in the string\n");
    }


    return 0;
}
