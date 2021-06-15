/* CH-230-A
  A3.p7 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void print_form(int n, int m, char c)
{ //main condition for height(first for loop),width(second for loop)
    for(int idx=1; idx<=n; idx++){
        for (int i=1; i<=m+idx-1; i++){
            printf("%c",c);
    }
    printf("\n");
    }
}


int main()
{ //input values for height,width,and type of char to print
    int num1;
    int num2;
    char char1;

    scanf("%d",&num1);
    scanf("%d",&num2);
    getchar();
    scanf("%c",&char1);

    print_form(num1,num2,char1);

    return 0;
}
