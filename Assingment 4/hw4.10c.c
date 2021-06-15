/* CH-230-A
  A4.10(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function which calculates the following operations
void proddivpowinv(float a, float b, float *prod, float *div,float *pwr, float *invb){
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a,b);
    *invb = 1/b;
}



int main()
{
    //declared two float numbers and the operations
    float n1,n2,product,division,power,invertb;
    scanf("%f",&n1);
    scanf("%f",&n2);

    //called the function to operate them
    proddivpowinv(n1,n2,&product,&division,&power,&invertb);

    //printed them
    printf("Product=%f\n",product);
    printf("division=%f\n",division);
    printf("power=%f\n",power);
    printf("inver=%f\n",invertb);



    return 0;
}
