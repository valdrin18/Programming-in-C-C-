/* CH-230-A
  A4.7(lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include<stdio.h>

//function to print matrix
void Pmatrix(int array[30][30],int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}
//function to write the numbers under main diagonal
void mainDiagonal(int array[30][30],int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(i>j){
            printf("%d ",array[i][j]);
          }
        }
    }
    printf("\n");
}

int main()
{
//declared matrix and variables i,j and n
int matrix[30][30],i,j;
int n;

//code to construct matrix
scanf("%d",&n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
    scanf("%d",&matrix[i][j]);
  }

//printed matrix calling function
printf("The entered matrix is:\n");
Pmatrix(matrix,n);

//printed numbers under main diagonal calling function
printf("Under the main diagonal:\n");
mainDiagonal(matrix,n);

}
