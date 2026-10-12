#include <stdio.h>
int main()
{
    int a =10 , b=20;
    int *ptr;
    int swap1,swap2;
    ptr = &a;
    ptr = &b;
    swap1=&b;
    swap2=&a;
    ptr =&swap1;
    ptr=&swap2;

    printf("Before swapping: a=%d b=%d\n", a,b);
    printf("After  swapping: a=%d b=%d\n", swap1,swap2);
    
     return 0;
}