/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use / 
and % operators.]*/
#include<stdio.h>

#include<conio.h>

void main(){
    int num,rem,sum=0;
    printf("Enter a four digit number :");
    scanf("%d",&num);
    int n = num;
while(num!=0){
    rem = num % 10; //we get unit digit as reminder
    sum = sum + rem; //here we store the reminder(unit digit)
num = num/10;

}
printf("sum of digits of this four digit number %d is : %d",n,sum);
    getch();
}