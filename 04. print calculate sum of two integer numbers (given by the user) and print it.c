//Write a C program to calculate sum of two integer numbers (given by the user) and print it.



#include<stdio.h>

int main()
{
    int a,b,sum=0;
    printf("Enter the Value of a:");
    scanf("%d",&a);
    printf("Enter the Value of b:");
    scanf("%d",&b);
    sum=a+b;
    printf("The Sum of a and b is: %d",sum);


    getch();
    return 0;

}
