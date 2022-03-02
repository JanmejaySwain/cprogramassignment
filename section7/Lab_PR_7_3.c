/* Experiment 7.3: Write a program that finds the sum of each row and sum of each column of a matrix.*/
#include <stdio.h>

#include <conio.h>

void main()
{
    int A[50][50], m, n, i, j, sum = 0;
    printf("Enter the no. of rows");
    scanf("%d", &m);
    printf("Enter the no. of columns");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix A :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("The matrix A is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum = sum + A[i][j];
        }
        printf("sum of elements of row %d : %d\n", i + 1, sum);
    }
    for (j = 0; j < n; j++)
    {
        sum = 0;
        for (i = 0; i < m; i++)
        {
            sum = sum + A[i][j];
        }
        printf("sum of elements of column %d : %d\n", j + 1, sum);
    }

    getch();
}