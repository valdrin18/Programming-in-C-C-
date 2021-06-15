/* CH-230-A
  A2.p1 Reading from the keyboard (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double a,b;
    int c,d;
    char e,f;
    scanf ("%lf",&a);
    getchar();
    scanf("%lf",&b);
    getchar();
    scanf("%d",&c);
    getchar();
    scanf("%d",&d);
    getchar();
    scanf("%c",&e);
    getchar();
    scanf("%c",&f);
    getchar();
    double sum=a+b;
    double diff=a-b;
    double square= a*a;
    printf("sum of doubles=%lf\n",sum);
    printf("difference of doubles=%lf\n",diff);
    printf("square=%lf\n",square);
    int sumi=c+d;
    int prodi=c*d;
    printf("sum of integers=%d\n",sumi);
    printf("product of integers=%d\n",prodi);
    int sumc=e+f;
    int prodc=e*f;
    printf("sum of chars=%i\n",sumc);
    printf("product of chars=%i\n",prodc);
    printf("sum of chars=%c\n",sumc);
    printf("product of chars=%c\n",prodc);
    return 0;
}

