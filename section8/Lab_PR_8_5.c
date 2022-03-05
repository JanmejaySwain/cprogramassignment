/* Experiment 8.5: Write a program which reads a string and prints it in alphabetical order. For example, the
word WELCOME should be displayed as CEELMOW. */
#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char s[100], temp;
    int i, j;
    printf("Enter the string :\n");
    scanf("%s", s);
    strupr(s);
    printf("\nThe word entered by you is : %s\n", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\nAbove string in alphabetical order : ");
    puts(s);

    getch();
}