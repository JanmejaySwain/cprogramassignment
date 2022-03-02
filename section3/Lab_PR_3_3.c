/*Write a program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.]*/
#include <stdio.h>

#include <conio.h>

void main()
{
    char ch;
    
    printf("Enter the character :");
    scanf("%c", &ch);
  
    (ch >= 65 && ch <= 90) ? printf("%c is Upper Alphabet\n", ch) :
     (ch >= 97 && ch <= 122) ? printf("%c is Lower Alphabet\n", ch)  : printf("you enterd a invalid input\n");
    getch();
}