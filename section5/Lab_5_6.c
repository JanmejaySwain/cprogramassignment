/* Write a program to find out the HCF and LCM of two numbers */
#include <stdio.h>

#include <conio.h>

void main()
{
    int x, y, HCF, LCM;
    printf("Enter two numbers :\n");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            HCF = i;
        }
    }
    LCM = ((x * y) / HCF);
    printf("HCF = %d\n", HCF);
    printf("LCM = %d", LCM);
    getch();
}