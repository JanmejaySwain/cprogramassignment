/*: Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to
‘n’. (Hint: Fibonacci series: 1 1 2 3 5 8 13 21 …) */
#include <stdio.h>

#include <conio.h>

void main()
{
    int n, fib3, i;
    int fib1 = 0;
    int fib2 = 1;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Required febonacci series is :\t");
    printf("%d\t", fib1);
    printf("%d\t", fib2);
    for (i = 2; i <= n; i++)
    {
        fib3 = fib1 + fib2;
        printf("%d\t", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    getch();
}