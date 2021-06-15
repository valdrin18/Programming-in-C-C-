/* CH-230-A
  A1.p4 simple_arithmetics Compute Devision (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int x=17,y=4;
    int sum,product,difference;
    int remainder;
    float division;
    division=(float)x/y;
    sum=x+y; product= x*y; difference= x-y; remainder=x%y;
    printf("x=%d\ny=%d\nsum=%d\nproduct=%d\ndifference=%d\ndivision=%f\nremainder of division=%i\n",x,y,sum,product,difference,division,remainder);
return 0;
}
