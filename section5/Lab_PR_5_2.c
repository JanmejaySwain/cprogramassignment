/* Write a program to print the following structure:
4 3 2 1 2 3 4
  3 2 1 2 3
    2 1 2
      1
*/
#include <stdio.h>

#include <conio.h>

void main()
{
    int i, j, space;
    for (i = 1; i <= 4; i++)
    {
        for (space = 1; space <= (i - 1); space++)
        {
            printf("  ");
        }
        for (j = (5 - i); j >= 1; j--)
        {
            printf("%d ", j);
        }
        for (j = 2; j <= (5 - i); j++)
        {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    getch();
}
