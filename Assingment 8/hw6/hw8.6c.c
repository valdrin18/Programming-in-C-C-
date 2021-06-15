/* CH-230-A
  A8.p6(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//main function
int main()
{
    //decalred two double values to save values from files
    double num1,num2;
    //created file,opened and checked if NULL
    FILE *fp;
    fp = fopen("A.txt","r");
    if(fp==NULL){
        printf("Cannot open file!\n");
        exit(1);
    }
    //scanned the number,closed
    fscanf(fp,"%lf",&num1);
    fclose(fp);

    //did the same proces for file 2
    fp=fopen("B.txt","r");
    if(fp==NULL){
        printf("Cannot open file!\n");
        exit(1);
    }
    fscanf(fp,"%lf",&num2);
    fclose(fp);

    //did the operations asked by problem
    double Sum,Diff,Prod,Div;
    Sum=num1+num2;
    Diff=num1-num2;
    Prod=num1*num2;
    Div=num1/num2;

    //opened the file where we print them
    fp=fopen("results.txt","w");
    if(fp==NULL){
        printf("Cannot open file!\n");
    }
    printf("Check your new file now for results\n");

    fprintf(fp,"Sum is: %lf\n",Sum);
    fprintf(fp,"difference is: %lf\n",Diff);
    fprintf(fp,"Product is: %lf\n",Prod);
    fprintf(fp,"Division is: %lf\n",Div);

    //closed the file
    fclose(fp);
    return 0;
}
