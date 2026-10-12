#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *ptrA = &a;
    int *ptrB = &b;

    *ptrA = 100;
    *ptrB = 200;
    // Change a to 100 using ptrA
       
    // Change b to 200 using ptrB

    // Print a and b
 printf("a=%d",a);
 printf("\nb=%d",b);
    return 0;
}