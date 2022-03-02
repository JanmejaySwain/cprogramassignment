/* Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461) */
#include <stdio.h>

#include <conio.h>

void main()
{
    int i, num, r_num = 0;
    printf("Enter a number :");
    scanf("%d", &num);
    i=num;
    while (i != 0)
    {
        r_num = r_num * 10 + (i % 10);
        i = i / 10;
    }

    if (num == r_num)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }

    getch();
}