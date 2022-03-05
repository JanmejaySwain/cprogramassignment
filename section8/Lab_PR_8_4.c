/* Experiment 8.4: Write a program that reads two strings and then compares them without using the
strcmp() function. */
#include <stdio.h>

#include <conio.h>

void main()
{
    char s1[100], s2[100];
    int i, num=0;
    printf("Enter the array s1 :\n");
    gets(s1);
    printf("Enter the array s2 :\n");
    gets(s2);
    printf("\ncomparing above two arrays\n");
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            num = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("Not Same");
    }
    else
    {
        printf("Same");
    }
    getch();
}