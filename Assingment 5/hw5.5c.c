/* CH-230-A
  A5.5(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//function for product
void product(double v[], double w[], int n){

    //declared variables for idx and product
    int idx;
    double prod=0;

    for(idx=0; idx<n; idx++){
        prod += (v[idx]*w[idx]);
    }
    printf("%lf\n",prod);
}
//function to calculate highest value
void largest(double v[],int n){

    //variable as first value of array
    double large=v[0];
    int i;

    for(i=0; i<n; i++){
        if(v[i]>large){
            large=v[i];
        }
    }
    printf("%lf\n",large);
}
//function to calculate lowest value
void smallest(double v[], int n){

    //variable as first value
    double small=v[0];
    int u;

    for (u=0; u<n; u++){
        if(v[u]<small){
            small=v[u];
        }
    }
    printf("%lf\n",small);
}
//values for largest value position
void Lposition(double v[], int n){

//same code as for highest value but added extra code
    int k1, largepos;
    double idx1=v[0];

    for(k1=0; k1<n; k1++){
        if(v[k1]>idx1){
            idx1=v[k1];
        }
    }
//to make it equal to a variable to print position
    for(k1=0; k1<n; k1++){
        if(v[k1]==idx1){
           largepos=k1;
           break;
        }
    }
    printf("%d\n",largepos);
}

void Sposition(double v[], int n){

    int k2, smallpos;
    double idx2=v[0];

    for (k2=0; k2<n; k2++){
        if(v[k2]<idx2){
            idx2=v[k2];
        }
    }
    for (k2=0; k2<n; k2++){
        if(v[k2]==idx2){
            smallpos=k2;
            break;
        }
    }
    printf("%d\n", smallpos);
}
//main function
int main()
{   //two arrays,scanned them, called functions.
    int n,k;
    scanf("%i",&n);
    double v[n],w[n];

    for(k=0; k<n; k++){
        scanf("%lf", &v[k]);
    }
    for(k=0; k<n; k++){
        scanf("%lf", &w[k]);
    }
    //print commands for each, and function call
    printf("Scalar product=");
    product(v,w,n);
	printf("The smallest = ");
	smallest(v, n);
	printf("Position of smallest = ");
	Sposition(v, n);
	printf("The largest = ");
	largest(v, n);
	printf("Position of largest = ");
	Lposition(v, n);
	printf("The smallest = ");
	smallest(w, n);
	printf("Position of smallest = ");
	Sposition(w, n);
	printf("The largest = ");
	largest(w, n);
	printf("Position of largest = ");
    Lposition(w, n);
    return 0;
}
