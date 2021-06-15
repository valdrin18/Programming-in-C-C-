/* CH-230-A
  A2.p6 Multiple pointers to same data (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    printf("Enter the values of X and Y:");
    scanf("%lf",&x);
    getchar();
    scanf("%lf",&y);
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one=&x,ptr_two=&x,ptr_three=&y;
    printf("The address of ptr1 is %p\n",ptr_one);
    printf("the address of ptr2 is %p\n",ptr_two);
    printf("the address of ptr3 is %p\n",ptr_three);
    return 0;
}
// had to use %p when printing the operators.
