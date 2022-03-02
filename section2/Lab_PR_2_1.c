/*Write a program to compute the area of a triangle given its base and height*/
#include<stdio.h>

#include<conio.h>

void main(){
    float b,h,area;//base=b and height=h 
    printf("Enter the base of the triangle: ");
    scanf("%f",&b);
    printf("Enter the height of the triangle: ");
    scanf("%f",&h);
    area = (1.0/2.0)*b*h;
    printf("Area of the triangle is : %f",area);
    getch();
}