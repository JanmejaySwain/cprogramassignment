/*Write a program to read the price of an item in decimal form (like 15.95) and print the 
output in paise (like 1595 paise)*/
#include<stdio.h>

#include<conio.h>

void main(){
    float rupees;
    int paise;
    printf("Enter the price of the item in rupees decimal form : ");
scanf("%f",&rupees);
paise = rupees * 100;
printf("price of the item in paise is : %d",paise);
    getch();
}