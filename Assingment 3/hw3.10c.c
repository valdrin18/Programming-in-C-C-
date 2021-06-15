/* CH-230-A
  A3.p10 Writing numbers (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
//function for product of two floats
float product(float a, float b){
    float pro = a * b;
    return pro;
}
//function for product by reference for 2 floats,using ptr
void productbyref(float a, float b, float *p){
    *p= a * b;
}
//function for modifying 2 floats
void modifybyref(float *a, float *b){
    *a=*a+3;
    *b=*b+11;
}


int main()
{ //declared variables and other values for using them in functions
    float num1;
    float num2;
    float ptr;
    scanf("%f",&num1);
    scanf("%f",&num2);

    float result=product(num1,num2);
    printf("%f\n",result);

    productbyref(num1,num2,&ptr);
    printf("%f\n",ptr);

    modifybyref(&num1,&num2);
    printf("%f %f\n",num1,num2);



    return 0;
}
