/*Write a program to swap two numbers without using a third variable*/
#include<stdio.h>

#include<conio.h>

void main(){
    int num1,num2,swap;
    printf("Please enter two number\n");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping first number is %d,second number is%d\n",num1,num2);
    //swap begining
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("After swapping first number is %d,second number is%d\n",num1,num2);
    getch();
}