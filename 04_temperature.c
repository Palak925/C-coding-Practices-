#include<stdio.h>
int main()
{
    float fahrenheit, Celsius;
    printf("Enter the value in Celsius:\n");
    scanf("%f",&Celsius);
    fahrenheit=(Celsius*9/5)+32;
    printf("fahrenheit=%.2f",fahrenheit);
    return 0;


}