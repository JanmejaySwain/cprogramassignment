/*Write a program to input a character and check whether it is a vowel or consonant using 
conditional operator. [Hint: compare against the ASCII range.]*/
#include<stdio.h>

#include<conio.h>

void main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
(ch==65 || ch==69 ||ch==73 || ch==79 || ch==85 ||
ch==97 || ch==101 || ch==105 || ch==111 || ch==117) ? printf("%c is Vowel",ch) :
printf("%c is consonant",ch);
    getch();
}