/*: Write a program to take a number as input and check whether it is even or odd using
conditional operator (do not use if statement)*/
#include <stdio.h>

#include <conio.h>

void main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    a % 2 == 0 ? printf("%d is even\n", a) : printf("%d isodd\n", a);
    getch();
}