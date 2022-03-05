/*Experiment 8.2: Write a program that will count the number of occurrences of a specific character in a
given line of text. */
#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char s[100], flag;
    int i, temp = 0;
    printf("Enter a line :\n");
    gets(s);
    printf("Enter the character : ");
    scanf("%c", &flag);
    for (i = 0; i <= strlen(s); i++)
    {
        if (s[i] == flag)
        {
            temp++;
        }
    }
    printf("The number of occurrences of character '%c' is : %d", flag, temp);
    getch();
}
