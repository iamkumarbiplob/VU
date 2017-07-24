//Write a C program that will take three numbers from user and find their average.



#include<stdio.h>

int main()
{
    int a,b,c,sum=0;
    float ave;
    printf("Enter the Value of a:");
    scanf("%d",&a);
    printf("Enter the Value of b:");
    scanf("%d",&b);
    printf("Enter the Value of c:");
    scanf("%d",&c);
    sum=a+b+c;
    ave=(float)sum/3;
    printf("The Average of a, b and c is: %f",ave);


    getch();
    return 0;

}
