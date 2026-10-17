#include <stdio.h>

int main()
{
    int a = 10;       // Normal variable
    int *ptr = &a;    // Pointer variable

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void *)&a);
    printf("Value of ptr = %p\n", (void *)ptr);
    printf("Value using ptr = %d\n", *ptr);

    return 0;
}