/*Write a C program to input the number the days from the user and convert it into years, months
and days.*/


#include <stdio.h>

int main()
{
    int days,years,weeks;

    printf("Enter days: ");
    scanf("%d",&days);

    years=(days/365);
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));

    printf("YEARS: %d\n",years);
    printf("WEEKS: %d\n",weeks);
    printf("DAYS: %d\n\n\n",days);


    getch();
    return 0;
}
