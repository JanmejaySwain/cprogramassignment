/*Rewrite the program mentioned in Experiment 2.2. However, rename the data types 
‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement*/
#include<stdio.h>

#include<conio.h>
#include<math.h>

void main(){
    typedef float decimal;
    typedef int integer;
    decimal P,R,SI,CI,A;
    integer T;
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
    printf(" compound interest = %f",CI);
    getch();
}