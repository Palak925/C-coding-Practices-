//Print all odd numbers from 1 to 20

#include<stdio.h>
int main()
{
    for(int i=1; i<=20;i++)
    {
        if(i%2==1)
        printf("%d ",i);
    }
    return 0;
}