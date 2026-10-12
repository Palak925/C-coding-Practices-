#include <stdio.h>
int main()
{
    int num=25;
    int *ptr;
    ptr=&num;
    *ptr=50;
    printf("Value of num = %d\n", num);
    return 0;

}