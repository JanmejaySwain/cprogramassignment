/*  Write a program to read ‘n’ characters and then delete the duplicate characters */
#include <stdio.h>

#include <conio.h>

void main()
{
    char a[100];
    int i, j, size, k;
    printf("Enter the no. of elements :");
    scanf("%d", &size);
    printf("Enter the elements :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%s", (a+i));
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < size; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
            }
        }
    }
    printf("After deleting duplicate number :\n");
  puts(a);
    getch();
}
