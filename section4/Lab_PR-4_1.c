/*Write a program to input three numbers and find out the smallest*/
#include<stdio.h>

#include<conio.h>

void main(){
    float a,b,c;
printf("Enter three numbers : \n");
scanf("%f %f %f",&a,&b,&c);
if(a<b){
    printf("%f is smallest :",a);
}
else if(b<c){
    printf("%f is smallest :",b);
}
else{
    printf("%f is smallest :",c);
}

    getch();
}