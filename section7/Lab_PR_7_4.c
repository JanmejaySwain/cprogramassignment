/* Experiment 7.4: Write a program that finds the sum of diagonal elements of a square matrix
 */
#include <stdio.h>

#include <conio.h>

void main()
{
    int A[50][50], i, j, sum = 0, m;
    printf("Enter the no. of rows and columns  of a square matrix :\n");
    scanf("%d", &m);
    printf("\nEnter the elements of the matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe matrix A is :\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }

        }
    }
    printf("\nSum of all diagonal elements of this matrix is : %d\n",sum);

    getch();
}