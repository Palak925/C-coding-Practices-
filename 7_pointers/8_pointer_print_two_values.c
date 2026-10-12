#include <stdio.h>
int main()
{
    int a =10 , b=20;
    int *ptr;
    ptr = &a;
    ptr = &b;
    
    printf("Value of num = %d\n", a);
    printf("Value of num = %d\n", b);
    return 0;

}