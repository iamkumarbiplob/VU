/*Write a C Program to input any Capital letter and display it with small letter. (without using
tolower() function) */


#include<stdio.h>

int main ()
{
    int a,b;
    char c,d;
    printf("Enter Capital Letter :");
    scanf("%c",&c);
    c=(int)c;
    d=(int)c+32;

    printf("The Small Letter is : %c\n\n",d);

    getch();
    return 0;
}
