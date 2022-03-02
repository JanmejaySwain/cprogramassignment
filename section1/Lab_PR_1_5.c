/*Write a program that takes the radius of a circle and displays its area and perimeter */
#include<stdio.h>

#include<conio.h>
#define pie 3.14
void main(){
int r;
printf("Enter the radius of circle\n");
scanf("%d",&r);
float area = pie*r*r;
float perimeter = 2*pie*r;
printf("area of this circle is : %f\n",area);
printf("perimeter of this circle is : %f\n",perimeter);
    getch();
}