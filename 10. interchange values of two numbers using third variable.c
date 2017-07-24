//Write a C Program to interchange values of two numbers using third variable.


#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter First Value:");
    scanf("%d",&x);
    printf("Enter Secound Value:");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("\n\nThe First Value is :%d\n\n",x);
    printf("The Secound Value is:%d\n\n",y);

    getch();
    return 0;
}

