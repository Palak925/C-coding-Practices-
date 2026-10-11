#include <stdio.h>
int main()
{
    printf("lets learn the pointers\n");
    int a=99;
    int* ptra = &a;
    printf("The value of a is %x\n", ptra);
    return 0;
}