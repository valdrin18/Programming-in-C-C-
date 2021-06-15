/* CH-230-A
  A2.p4 Area computations (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,h;
    scanf("%f",&a);
    getchar();
    scanf("%f",&b);
    getchar();
    scanf("%f",&h);
    float squarearea=a*a;
    float rectanglearea= a*b;
    float trianglearea= (a*h)/2;
    float trapezoidarea=(a+b)*h/2;
    printf("square area=%f\n",squarearea);
    printf("rectangle area=%f\n",rectanglearea);
    printf("triangle area=%f\n",trianglearea);
    printf("trapezoid area=%f\n",trapezoidarea);
    return 0;
}
