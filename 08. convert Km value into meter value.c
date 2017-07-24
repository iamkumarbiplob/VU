//Write a C Program from convert Km value into meter value.


#include<stdio.h>

int main()
{
    double m,km;
    printf("Enter Kilo-Meter Value\t: ");
    scanf("%lf",&km);
    m=(double)km*1000;
    printf("The Meter Value\t\t: %.1lf m\n\n",m);

    getch();
    return 0;
}

