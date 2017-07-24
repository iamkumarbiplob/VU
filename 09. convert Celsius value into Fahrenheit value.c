//Write a C Program to convert Celsius value into Fahrenheit value. (Formula: F = (9c/5)+32)


#include<stdio.h>

int main()
{
    int a,c,f;
    printf("Enter the Celsius Value\t: ");
    scanf("%d",&c);
    a=(9*c)/5;
    f=a+32;
    printf("The Fahrenheit Value is\t: %d \n\n",f);

    getch();
    return 0;
}
