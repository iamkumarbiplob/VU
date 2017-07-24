/*Write a C Program to input three digits number from user and display square of first and last
numbers.(Hint : I/p : 358 O/p : Square of 3 is 9 and Square of 8 is 64)*/




#include<stdio.h>

int main()

{
    int n,f,l,s;

    printf("Please enter a 3 digit number: ");
    scanf("%d", &n);

    f=n/100;
    l=n%10;

    printf("\n\n\nSquare of %d is %d and square of %d is %d\n\n\n", f,f*f,l,l*l);

    getch();
    return 0;
}
