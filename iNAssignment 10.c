#include <stdio.h>
int main()
{
    int day, month, year;
    printf("Enter the date in the format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Day - %02d, Month - %02d, Year - %4d\n", day, month, year);
    return 0;
}


#include<stdio.h>
int main()
{
    int d,m,y;
    char c1,c2;
    printf("Enter date month and year");
    scanf("%d%c%d%c%d",&d,&c1,&m,&c2,&y);
    printf("Day-%d,Month-%d,Year-%d",d,m,y);
   return 0;
}
