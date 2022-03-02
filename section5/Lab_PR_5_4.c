/*Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!) */
#include <stdio.h>

#include <conio.h>

void main()
{
    int n, i, temp, j, fact = 1;
    float sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("1");
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= (i + 1); j++)
        {
            fact = fact * j;
        }
        if (i % 2 == 0)
        {
            temp = -1 * i;
        }
        else
        {
            temp = i;
        }
        sum = (float)temp / (float)fact;
        printf("+(%d)/(%d!)", temp, i + 1);
        fact = 1;
    }
    printf("= %f", sum);
    getch();
}