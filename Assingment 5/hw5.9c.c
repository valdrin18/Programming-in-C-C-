/* CH-230-A
  A5.9(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

//function to scan elements of 3d array
void elements(int ***array, int row,int col, int deep){
    int i,j,k;
    //for loop to scan every element
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            for(k=0; k<deep;k++){
                scanf("%d", &array[i][j][k]);
            }
        }
    }
}

//function to print 3d array elements
void printElements(int ***array, int row, int col, int deep){
    int i,j,k;
    //for loop to print every element
    for(k=0; k<deep; k++){
        printf("Section %d:\n",k+1);
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                printf("%d ",array[i][j][k]);
            }
        printf("\n");
        }
    }
}

//main function
int main()
{
    //declared array,rows,cols and variables to go through
    int ***array,row,col,deep,i,j;

    //scanned them
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &deep);

    //memory allocation

    array=(int***)malloc(sizeof(int**)*row);

    for(i=0; i<row; i++){
        array[i]=(int**)malloc(sizeof(int*)*col);
        for(j=0; j<col; j++){
            array[i][j]=(int*)malloc(sizeof(int*)*deep);
        }
    }
    //called functions
    elements(array,row,col,deep);
    printElements(array,row,col,deep);


    //freed the 3 dimensional array
    for (int i = 0; i < row; i++){

		for (int j = 0; j < col; j++)
			free(array[i][j]);

		free(array[i]);
	}
	free(array);


	return 0;
}
