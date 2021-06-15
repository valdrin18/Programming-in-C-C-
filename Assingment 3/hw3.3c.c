
/* CH-230-A
  A3.p3 lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/
#include <stdio.h>

 float convert (int cm) {
    float kg= cm* 0.00001;  //function to convert
    return kg;
 }

 int main () {  //declared number and used by ref
    int number;
    scanf("%d",&number);
    printf ("Result of conversion: %f\n",convert(number)) ;
    return 0;
 }
