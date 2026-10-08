#include <stdio.h>
void sum()
{
    int a, b, sum =0;
    printf("Enter Two Number:");
    scanf("%d %d" , &a, &b);
    sum =a+b;
    printf("sum=%d\n", sum);
}
int main()
{ 
    printf("Hello User If you want to add two Enter Here:");
    sum();
    return 0;
}