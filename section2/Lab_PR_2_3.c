/*Write a program that requests two float type numbers from the user and then divides the 
1st number by the 2nd and displays the result along with the numbers*/
#include<stdio.h>

#include<conio.h>

void main(){
    float num1,num2;
    printf("Please enter two float type number :\n");
    scanf("%f%f",&num1,&num2);
    printf("%f / %f = %f\n",num1,num2,num1/num2);

    getch();
}