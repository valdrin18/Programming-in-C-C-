/* CH-230-A
  A5.11(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//prime function
int prime(float x, float p){
    //cases if p is 1,lower then 1, modulus 0, or valid
    if (p==1){
        return 1;
    }
    else if(p<1){
        return 0;
    }
    else if(x%p==0){
        return 0;
    }
    else{
        prime(x,p-1);
    }
    return 1;
}
//main function
int main()
{
    //declared x, scanned it,used it at function prime
    float x;
    //beginning of code
    beginning:
    scanf("%d",&x);
    //validity for it it be bigger than 0
    if(x>0){
        //condition to check it prime is valid or not
        //according to it,print.
        if(prime(x,x/2)){
            printf("%f is prime\n",x);
        }
        else{
            printf("%f is not prime\n",x);
        }

    }
    else{
        //if the first condition for x validity not valid, then,
        //then go to beginning and scan another value
        goto beginning;
    }
    return 0;
}
