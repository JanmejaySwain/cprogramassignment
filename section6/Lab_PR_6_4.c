/* Write a program to read ‘n’ real numbers and then insert a new real number at a given
position (after insertion, the array size should increase by 1). */
#include <stdio.h>

#include <conio.h>

void main()
{
    int a[100], n, i, j, k, temp;
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    printf("Enter the elements of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nBefore entry the numbers are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter a new number which you want to insert :\n");
    scanf("%d", &j);
    printf("\nposition number in which the number is inserted :\n");
    scanf("%d", &k);
    
    if (k >= 0 && k < n)
    {
        n++;
        for (i = n-1; i > (k - 1); i--)
        {
            a[i] = a[i - 1];
        }
        a[i] = j;
        
        printf("\nNow the array size is : %d", n);
        printf("\nAfter entry the numbers are :\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
    }
    else
        printf("You are entered a invalid position");

    getch();
}