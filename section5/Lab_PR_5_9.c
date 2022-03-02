/* Write a program to input a number and check whether it is prefect or not (A number is
called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number
since 1+2+4+7+14=28). */
#include <stdio.h>

#include <conio.h>

void main()
{
    int num, i, sum = 0, temp;
    printf("Enter a number :");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (num == sum)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a aperfect number", num);
    }
    getch();
}