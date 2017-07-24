/*Write a C program that take an integer value (BDT) and convert it into US dollar and print it with
remaining BDT. Where,
a) 1 US$ = 77 BDT. (Sample input: 100, Output: 1 dollar 23 Tk)
*/


#include<stdio.h>
int main ()
{
    int a,b=77,c,d;
    printf("Enter BDT value:");
    scanf("%d",&a);
    d=a/b;
    c=a-(b*d);
    printf("%d dollar %d TK.\n\n",d,c);

    getch();
    return 0;
}
