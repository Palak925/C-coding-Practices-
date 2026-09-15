#include<stdio.h>
#include<math.h>
int main()
{
    int unit,bill;
    printf("Enter units:");
    scanf("%d",&unit);

    if(unit>=0 && unit<=100)
    { 
        bill=unit*2;
         printf("Bill=%d",bill);}
    else if(unit>=101 && unit<=200)
    { 
        bill=unit*3;
         printf("Bill=%d",bill);
    }
    else if(unit>=201 && unit<=300)
    {  
        bill=unit*5;
        printf("Bill=%d",bill);
    }
    else
    {  
        bill=unit*7;
        printf("Bill=%d",bill);
    }
    return 0;
}