/*Write a program to compute the area of a triangle given its three sides*/
#include<stdio.h>

#include<conio.h>
#include<math.h>

void main(){
    float a,b,c,s,area;
    //here a,b&c represent 3 sides of a triangle 
    printf("Enter the 3 sides of a triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the given triangle is : %f",area);
    getch();
}