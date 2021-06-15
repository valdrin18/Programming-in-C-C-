/* CH-230-A
  A3.p6 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
//function to convert to pounds
float to_pounds(int kg,int gr) {
    float con=kg*2.2 + gr * 0.0022;
    return con;
 }
//input num1,num2
 int main ()
{
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d\n",&num2);
    printf ("Result of conversion: %f\n",to_pounds(num1,num2)) ;
    return 0;
 }
//Declared two int values for kilogram and gram
//Used the function float to pounds above for conversion process.
