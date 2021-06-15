/* CH-230-A
  A8.p5(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//main function
int main()
{
    //decalred array with 2 elements.
    char ch[2];
    int i;
    //created file,opened and checked if NULL
    FILE *fp;
    fp = fopen("chars.txt","r");
    if (fp==NULL){
        printf("Cannot open file!\n");
        exit(1);
    }
    //got the first two elements
    for(i=0; i<2; i++){
    ch[i]=getc(fp);
    }
    //closed file
    fclose(fp);
    //created a new file,and printed sum there.
    fp=fopen("codesum.txt","w");
    if(fp==NULL){
        printf("Cannot open file!\n");
        exit(1);
    }
    //added this print just to make it look a bit better
    printf("Check your file in your folder\n");
    fprintf(fp,"Sum in asci code is %d",ch[0]+ch[1]);

    fclose(fp);
    return 0;
}
