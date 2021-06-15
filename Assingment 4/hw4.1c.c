#include<stdio.h>
#include<math.h>

//input two limits,a value x,area and perimeter
 int main () {
     float limit1,limit2;
     float increment;
     float x;
//scanned the input values that we declared
     scanf ("%f",&limit1);
     scanf ("%f",&limit2);
     scanf("%f",&increment);
//for condition to print them
//used calculations to measure area and perimeter
     for (x=limit1; x<=limit2; x+=increment) {
          printf("%f %f %f\n",x,x*x*M_PI,x*2*M_PI);
     }

     return 0;

     }
