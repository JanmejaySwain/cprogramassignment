/*: Write a program to count the number of digits in a number */
#include <stdio.h>

#include <conio.h>

void main()
{
    int num, count;
    printf("Enter a number :");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("The number of digits in the given number is : %d ",count);
    getch();
}