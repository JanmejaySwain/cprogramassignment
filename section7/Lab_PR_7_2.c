/*Experiment 7.2: Write a program to input a square matrix (a matrix of order n × n) and then print its upper
triangular matrix. e.g */
#include <stdio.h>

#include <conio.h>

void main()
{
    int A[4][4], i, j;
    printf("Enter the elements of matrix A :\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("The matrix A is :\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", A[i][j]);
        
        }
        printf("\n");
    }
    printf("The upper trangulaer matrix :\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <4; j++)
        {
           if(i<=j){
               printf("%d\t",A[i][j]);
           }
           else{
               printf("\t");
        
           }
        }
        printf("\n");
    }
    getch();
}