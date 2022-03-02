/*Write programs to print the following structure:
      *
    * * *
  * * * * *
* * * * * * *
 */
#include <stdio.h>

#include <conio.h>

void main()
{
    int i, j, space, count = 1;
    for (i = 1; i <= 4; i++)
    {
        for (space = 1; space <= (4 - i); space++)
        {
            printf("  ");
        }
        for (j = 1; j <= count; j++)
        {
            printf("* ");
        }
        count = count + 2;
        printf("\n");
    }

    getch();
}