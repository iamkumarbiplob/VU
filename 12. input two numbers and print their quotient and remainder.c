//Write a C program to input two numbers and print their quotient and remainder.

#include<stdio.h>

int main()
{
    int x,y;
    double rem,quo;
    printf("Enter First Value:");
    scanf("%d",&x);
    printf("Enter Secound Value:");
    scanf("%d",&y);
    quo=(double)x/y;
    rem=(double)(x%y);
    printf("\n\nThe Quotient is :%.2lf\n\n",quo);
    printf("The Remainder is:%.2lf\n\n",rem);

    getch();
    return 0;
}



