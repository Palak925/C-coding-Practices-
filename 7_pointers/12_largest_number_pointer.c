#include <stdio.h>
int main()
{
    int a=55, b=20;
    int *ptrA=&a;
    int *ptrB=&b;
    if( *ptrA>*ptrB )
    {
        printf("Largest number=%d",*ptrA);
    }
    else
    {
        printf("Largest number=%d", *ptrB);
    }
   return 0;
}