/*Write a C Program to input two digits number from user and display with reverse number on screen
(Hint : I/P : 32 O/P : 23)*/




#include<stdio.h>

int main()

{
    int n,f,l;

    printf("Please enter a 2 digit number: ");
    scanf("%d",&n);

    f=n/10;
    l=n%10;

    printf("\n\n\nThe Reverse number: %d%d\n\n\n",l,f);


    getch();
    return 0;
}
