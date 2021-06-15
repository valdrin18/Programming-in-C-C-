/* CH-230-A
  A1.p3 compile_error (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    float result;
    double a = 5.0;
    double b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
return 0;
}
// the error was that The division could not be made since there were two int values and we need to consider them as float.
//in order to fix that, I wrote the values with .0 and considered them as double not int. Then at the printing part, it would not work with %d
//since that was for int values. Instead I used %f which printed the float value of division.
