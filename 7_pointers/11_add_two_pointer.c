#include <stdio.h>
int main()
{
    int a=15, b=25;
    int *ptrA= &a;
    int *ptrB=&b;
    int sum;
    sum= *ptrA+*ptrB;
    printf("Sum= %d\n", sum);
    return 0;
}