/* CH-230-A
  A5.1(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

//function to construct and print triangle
void print_form(int n,char ch)
{
    int idx,i;
    for(idx=0; idx<n; idx++)
    {
        for (i=n-idx; i>=1; i--){
            printf("%c",ch);
    }
    printf("\n");
    }
}


int main()
{   //declared a number and character
    int number;
    char character;

    scanf("%d",&number);
    getchar();
    scanf("%c",&character);

    //called function to print triangle
    print_form(number,character);

    return 0;
}

