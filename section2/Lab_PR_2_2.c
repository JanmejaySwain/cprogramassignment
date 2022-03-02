/*Write a program that takes as input, the principal, rate of interest, and time, and then 
calculates the simple and compound interest*/
#include<stdio.h>

#include<conio.h>
#include<math.h>

void main(){
    float P,R,SI,CI,A;
    int T;
    printf("Enter the principal amount : ");
    scanf("%f",&P);
    printf("Enter the percentage rate  : ");
    scanf("%f",&R);
    printf("Enter the time in years : ");
    scanf("%d",&T);
    SI = (P*T*R)/100;
    printf("simple interest = %f\n",SI);
    A = P*(pow(1+(R/100),T));
    CI = A-P;
    printf(" compound interest = %f",CI);//here compounded anually
    getch();
}