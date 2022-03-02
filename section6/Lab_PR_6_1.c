/*Write a program to input ‘n’ numbers and sort them in descending order */
#include <stdio.h>

#include <conio.h>

void main()
{
    int a[100], i, j, temp, n;
    printf("Enter the no. of elements you want to print (number<100) :");
    scanf("%d", &n);
    printf("Enter the elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    getch();
}