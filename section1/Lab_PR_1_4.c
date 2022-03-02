/*: Write a program to enter the temperature in degree Celsius and display it in Fahrenheit 
and vice-versa. [NOTE: C = (5.0/9.0) × (F - 32)] */
#include<stdio.h>

#include<conio.h>

void main(){
    float celsius,fahrenheit;
    printf("Enter the temprature in degree celsius:\n");
    scanf("%f",&celsius);
fahrenheit = ((9.0/5.0)*celsius)+32;
printf("Given temprature in fahrenheit is:%f\n",fahrenheit);
    getch();
}