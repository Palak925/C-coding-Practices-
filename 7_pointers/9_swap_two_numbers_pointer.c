#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *ptrA = &a;
    int *ptrB = &b;
    int temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}