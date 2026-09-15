#include<stdio.h>
int main()
{
    int unit;
 printf("Enter the value in unit:");
 scanf("%d", &unit);

 if(unit>0)
 {
    if(unit>=1 && unit<=100)
    {
        printf("Basic Usage");
    }
    else if (unit>=101 && unit<=200)
    {
        printf("Medium Usage");
    }
    else
    {
        printf("Heigh Usage");
    } 
 }
 else
 {
    printf("No electricity usage");
 }
 return 0;
}