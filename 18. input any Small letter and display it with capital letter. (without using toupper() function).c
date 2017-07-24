/*Write a C Program to input any Small letter and display it with capital letter. (without using
toupper() function)*/


#include<stdio.h>

int main ()
{
    int a,b;
    char c,d;
    printf("Enter Small Letter :");
    scanf("%c",&c);
    c=(int)c;
    d=(int)c-32;

    printf("The Capital Letter is : %c\n\n",d);

    getch();
    return 0;
}
