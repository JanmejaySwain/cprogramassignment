// Experiment 8.1: Write a program to find out the length of a string without using the strlen() function.
#include <stdio.h>

#include <conio.h>

void main()
{
    char s[100];
    int i, temp = 0;
    printf("Enter the string :\n");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        temp++;
    }
    printf("The length of string is : %d", temp);
    getch();
}