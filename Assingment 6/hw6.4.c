/* CH-230-A
  A6.4(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//macro to multiply elements of two vectors
#define PRODUCT1(a,b,c,n)\
{\
    int i;\
    for(i=0; i<n; i++){\
        c[i]=(a[i]*b[i]);\
    }\
}
//macro for scalar product
#define PRODUCT2(a,b,s,n)\
{\
	int i;\
	for(i=0; i<n; i++){\
		s+=(a[i]*b[i]);\
	}\
}

//main function
int main()
{
    //declared n-dimension, i for loops,sum
    int n,i,s=0;
    scanf("%d",&n);

    //three vectors
    int vector1[n];
    int vector2[n];
    int vector3[n];

    //loops to read elements
    for (i=0; i<n; i++){
        scanf("%d",&vector1[i]);
    }

    for (i=0; i<n; i++){
        scanf("%d",&vector2[i]);
    }

    //checked if defined for macro,then printed
    #ifdef PRODUCT1
    PRODUCT1(vector1,vector2,vector3,n);
    printf("Product of intermediate values is:\n");
    for (i=0; i<n; i++){
        printf("%d\n",vector3[i]);
    }
    #endif
    //printed macro for scalar product
    PRODUCT2(vector1,vector2,s,n);
    printf("The scalar product is: %d\n",s);

    return 0;
}
