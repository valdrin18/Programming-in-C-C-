/* CH-230-A
  A6.p1(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
//defined the macro program for swapping
#define SWAP(x,y,z){z swap = x; x=y; y=swap;}

int main()
{

    //declared two int and double values
    int int1,int2;
    double doubleA,doubleB;

    scanf("%d%d",&int1,&int2);
    scanf("%lf%lf",&doubleA,&doubleB);

    //called macro for swapping
    SWAP(int1, int2, int);
    SWAP(doubleA, doubleB, double);

    //printed them
    printf("After swapping:\n");
    printf("%d\n%d\n%.6lf\n%.6lf\n", int1, int2, doubleA, doubleB);
    return 0;
}
