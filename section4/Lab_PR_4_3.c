/*Admission to professional course is subject to the any one of the following conditions:
a) Marks in Mathematics >= 60, and Marks in Physics >= 50, and Marks in Chemistry >= 40
b) Total in all three subjects >= 200
Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is 
admitted else displays “Not Admitted”.*/
#include<stdio.h>

#include<conio.h>

void main(){
    int mth,phy,che,total;
    
    printf("marks in mathematics :");
    scanf("%d",&mth);
    printf("marks in physics :");
    scanf("%d",&phy);
    printf("marks in chemistry :");
    scanf("%d",&che);
    total = (mth+phy+che);
    printf("Total Marks is : %d",total);
    if(mth>=60 && phy>=50 &&che>=40 && total>=200){
        printf("\nAdmitted");
    }
    else{
        printf("\nNot Admitted");
    }
    getch();
}