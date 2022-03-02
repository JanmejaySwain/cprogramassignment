/*Write a program to read ‘n’ numbers and find the frequency of occurrence of each
number */
#include <stdio.h>

#include <conio.h>

void main()
{
    int array[100], n, i, j, count = 0; // n is size of array
    printf("Number of elements you want to entered :\n");
    scanf("%d", &n);
    printf("Enter the elements of array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                if (i != j)
                {
                    array[j] = ' ';
                }
            }
        }
        if (array[i] != ' ')
        {
            printf("The frequency of occurrence of %d is : %d\n", array[i], count);
        }
    }
    getch();
}