#include <stdio.h>

int main()
{
    char ch , res, mask;
    int pos;
    printf("Enter the input : ");
    scanf("%hhx", &ch);
    printf("Enter the position : ");
    scanf("%d", &pos);
    mask = 1<<pos;
    res =ch | mask ;
    printf("After setting %d bit, %hhx\n", pos, res);
    return 0;
}