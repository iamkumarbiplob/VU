/*Write a C Program to input three digits number from user and calculate sum of first and last
numbers. (Hint : I/p : 358 O/p :11)*/



#include<stdio.h>

int main()

{
    int n,f,l,s;

    printf("Please enter a 3 digit number: ");
    scanf("%d", &n);

    f=n/100;
    l=n%10;

    s=f+l;

    printf("\n\nSum of %d and %d is : %d\n\n", f,l,s);

    getch();
    return 0;
}
