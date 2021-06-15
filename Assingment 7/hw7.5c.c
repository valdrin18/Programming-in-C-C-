/* CH-230-A
  A7.p5 simple_arithmetics Compute Devision (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Compare numbers for ascending order
int ascending(const void *num1, const void *num2){
	const int* a = (const int*) num1;
	const int* b = (const int*) num2;
	if(*a < *b) return -1;
	else if(*a > *b) return 1;
	else return 0;
}

// Compare numbers for descending order
int descending(const void *num1, const void *num2){
	const int* a = (const int*) num1;
	const int* b = (const int*) num2;
	if(*a > *b) return -1;
	else if(*a < *b) return 1;
	else return 0;
}

void  print(int *array,int n, int(*func)(const void *num1,const void *num2)){

    int i;
    qsort(array,n,sizeof(array[0]),func);
    for(i=0; i<n; i++){
        printf("%d ",array[i]);
    }
    printf("\n");

}

int (*func)(const void *num1, const void *num2);

//main function to scan array and call func
int main()
{
    int n,i;
    char c;
    scanf("%d",&n);
    int array[n];

    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    while(1){
        scanf("%c",&c);
    switch(c){

        case 'a':
            print(array,n,ascending);
            break;

        case 'd':
            print(array,n,descending);
            break;

        case 'e':
            exit(1);
            break;
    }
}
    return 0;
}
