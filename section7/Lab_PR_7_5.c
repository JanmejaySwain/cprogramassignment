/* Experiment 7.5: Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B */
#include <stdio.h>

#include <conio.h>

void main()
{
    int A[50][50], B[50][50], i, j, m, a, k, sum = 0, c[50][50];
    printf("Enter the no. of rows and column of square matrix A and B\n");
    scanf("%d", &m);
    printf("\nEnter the elements of matrix A :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter the elements of matrix B :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("The matrix A is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("The matrix B is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("The avilable options are given below\n ");
    printf("1. A + B\n");
    printf("2. A - B\n");
    printf("3. B - A\n");
    printf("4. A * B\n");

    while (1)
    {
        printf("Enter your choice :\n");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            // A+B
            printf("A+B =\n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < m; j++)
                {
                    printf("%d\t", A[i][j] + B[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            // A - B
            printf("A-B =\n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < m; j++)
                {
                    printf("%d\t", A[i][j] - B[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            // B-A
            printf("B-A =\n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < m; j++)
                {
                    printf("%d\t", B[i][j] - A[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            printf("A*B =\n");
            for (i = 0; i < m; i++)
            {
                sum = 0;
                for (j = 0; j < m; j++)
                {
                    for (k = 0; k < m; k++)
                    {
                        sum = sum + A[i][k] * B[k][j];
                       
                    }
                     printf("%d\t", sum);
                }
                printf("\n");
            }
            break;

        default:
            printf("You have entered wrong choice\n");
        }
    }
    getch();
}