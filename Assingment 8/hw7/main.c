/* CH-230-A
  A8.p7(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//main function
int main()
{
    //declared char,3 file pointers
    char ch;
    //copened,checked conditions for them
    FILE *f1,*f2,*f3;
    f1 = fopen("text1.txt","r");
    if(f1==NULL){
        printf("Cannot open file!\n");
        exit(1);
    }
    f2=fopen("text2.txt","r");
    if(f2==NULL){
        printf("Cannot open file!\n");
        exit(1);
    }
    f3=fopen("merge12.txt","w");
    if(f3==NULL){
        printf("Cannot open file!\n");
    }
    //in a loop,put each element into the new file
    while( ( ch = fgetc(f1) ) != EOF )
	      fputc(ch,f3);
	while( ( ch = fgetc(f2) ) != EOF )
	      fputc(ch,f3);

    //close files
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
