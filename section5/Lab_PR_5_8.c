/* Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371). */
#include <stdio.h>

#include <conio.h>

void main()
{
    int n, i, sum = 0, temp;
    printf("Enter a number :");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        temp = i % 10;
        sum = sum + (temp * temp * temp);
        i = i / 10;
    }
    if (n == sum)
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number\n", n);
    }
    getch();
}
