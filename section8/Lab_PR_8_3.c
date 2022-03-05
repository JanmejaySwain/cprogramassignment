/*Experiment 8.3: Write a program that takes as input a string and two numbers n1 and n2 and find the
substring between these two positions. For example, let the string is “Welcome” and the numbers are
n1=2 and n2=5 then the substring will be: “lcom”. */
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    char s[100];
    int num1, num2, i;
    printf("Enter a string : ");
    gets(s);
    printf("Enter two numbers :\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        exit(1);
    }
    for (i = num1; i <=num2; i++)
    {
        printf("%c",s[i]);
    }
    getch();
}