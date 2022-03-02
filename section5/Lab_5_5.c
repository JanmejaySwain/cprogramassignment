/* Write a program to find the number of and sum of all integers greater than 100 and less 
than 200 that are divisible by 7 */
#include<stdio.h>

#include<conio.h>

void main(){
    int i,count=0,sum=0;
    for(i=101;i<200;i++){
        count++;
        if(i%7==0){
            sum=sum+i;
        }
    }
    
        printf("The number of integers greater than 100 and less than 200 is : %d\n",count);
printf("sum = %d",sum);
    getch();
}