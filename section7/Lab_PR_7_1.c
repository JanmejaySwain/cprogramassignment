/* Experiment 7.1: Write a program to input a square matrix (a matrix of order n × n) and check whether it is
symmetric or not (A matrix A = (aij) is symmetric if aij = aji, for all i and j).
*/
#include <stdio.h>

#include <conio.h>

void main()
{
    int a[3][3], b[3][3], i, j, temp;
    printf("Enter the elements in matrix a :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix a is :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix a is matrix B i.e\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            b[i][j] = a[j][i];
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        temp = 0;
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == b[i][j])
            {
                temp = 1;
            }
            else
                break;
        }
    }
    if (temp == 1)
    {
        printf("The matrix A is symmetric");
    }
    else

        printf("The matrix A is not symmetric");
    getch();
}