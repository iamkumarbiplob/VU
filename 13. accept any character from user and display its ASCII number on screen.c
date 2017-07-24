//Write a C Program to accept any character from user and display its ASCII number on screen.



#include<stdio.h>
int main ()
{
    int a,b;
    char c,d;
    printf("Enter Charecter value:");
    scanf("%c",&c);

    printf("The ASCII Value is : %d\n\n",c);

    getch();
    return 0;
}
