/*Write a C program that take an integer value (BDT) and convert it into US dollar and print it with
remaining BDT. Where,
a) 1 US$ = 77.5 BDT. (Sample input: 100, Output: 1 dollar 22.5 Tk)
*/

#include<stdio.h>
int main ()
{
    int a,d;
    double b=77.5,c;
    printf("Enter BDT value:");
    scanf("%d",&a);
    d=a/b;
    c=(double)(b*d)-a;
    printf("%d dollar %.1lf TK.\n\n",d,c);

    getch();
    return 0;
}
