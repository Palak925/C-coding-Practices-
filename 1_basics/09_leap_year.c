#include<stdio.h>
int main ()
{ int year;
    printf(" Enter the year");
    scanf("%d",&year);
    if(year % 400==0)
    {
        printf("The year is leap year:%d\n",year);
    }
    else if (year%4==0 && year%100!=0)
    {
        printf("The year is leap year:%d\n",year);
    } 
    else
    {
        printf(" The year is not leap year:%d\n",year);
    }
    return 0;
}