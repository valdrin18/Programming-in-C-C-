/* CH-230-A
   a5_p8.c
   Era Gërbeshi
   egerbeshi@jacobs-university.de */
#include <stdio.h>
#include <stdlib.h>

//Multiplying the matrices.
void multiplication(int **arr, int **arr2, int **arr3,
 int r1, int c1, int r2, int c2)
{
    int i, j, k;

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            arr3[i][j] = 0;
        }
    }

    for (i = 0; i < r1; ++i)
    {
        for (j = 0; j < c2; ++j)
        {
            for (k = 0; k < c1; ++k)
            {
                arr3[i][j] = arr3[i][j] + (arr[i][k] * arr2[k][j]);
            }
        }
    }
}

//Reading the elements of the matrices.
void reading_matrix(int **arr, int numrow, int numcol)
{
    int r;
    int c;
    for (r = 0; r < numrow; r++)
    {
        for (c = 0; c < numcol; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
}

//Printing the matrices, depending on
//the variables which we input as function arguments.
void printing_matrix(int **arr, int numrow, int numcol)
{
    int row;
    int col;
    for (row = 0; row < numrow; row++)
    {
        for (col = 0; col < numcol; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
}

int main()
{
    //Reading the size of rows and colums.
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    int row = 0;
    //Allocating memory for the first matrix.
    int **matrix;
    matrix = (int **)malloc(sizeof(int *) * n);
    if (matrix == NULL)
    {
        exit(1);
    }
    for (row = 0; row < n; row++)
    {
        matrix[row] = (int *)malloc(sizeof(int) * m);
        if (matrix[row] == NULL)
            exit(1);
    }

    //Allocating memory for the second matrix.
    int **matrix_second;

    matrix_second = (int **)malloc(sizeof(int *) * m);
    if (matrix_second == NULL)
    {
        exit(1);
    }
    for (row = 0; row < m; row++)
    {
        matrix_second[row] = (int *)malloc(sizeof(int) * p);
        if (matrix_second[row] == NULL)
            exit(1);
    }

    //Allocating memory for the multiplied matrix
    int **multiplied_matrix;
    multiplied_matrix = (int **)malloc(sizeof(int *) * n);
    if (multiplied_matrix == NULL)
    {
        exit(1);
    }
    for (row = 0; row < n; row++)
    {
        multiplied_matrix[row] = (int *)malloc(sizeof(int) * p);
        if (multiplied_matrix[row] == NULL)
            exit(1);
    }

    //Calling the reading functions for the first
    //and the second matrix.
    reading_matrix(matrix, n, m);
    reading_matrix(matrix_second, m, p);

    //Calling the multiplication function,
    //in order to multiply the first and the second matrices.
    multiplication(matrix, matrix_second, multiplied_matrix, n, m, m, p);

    printf("Matrix A:\n");
    printing_matrix(matrix, n, m);

    printf("Matrix B:\n");
    printing_matrix(matrix_second, m, p);

    printf("The multiplication result AxB:\n");
    printing_matrix(multiplied_matrix, n, p);

    //Deallocating the memory for each of
    //the 2D arrays.
    int i;
    for (i = 0; i < n; i++)
    {
        free(matrix[i]);
        free(matrix);
    }
    for (i = 0; i < m; i++)
    {
        free(matrix_second[i]);
        free(matrix_second);
    }
    for (i = 0; i < n; i++)
    {
        free(multiplied_matrix[i]);
        free(multiplied_matrix);
    }
    return 0;
}
