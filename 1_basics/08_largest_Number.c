#include<stdio.h>
int main()
{
    int Num1, Num2, Num3;
    printf("Enter the Num1:\n");
    scanf("%d",&Num1);
    printf("Enter the Num2:\n");
    scanf("%d",&Num2);
    printf("Enter the Num3:\n");
    scanf("%d",&Num3);
if(Num1>Num2 && Num1>Num3)
{
    printf("The largest Number is: %d",Num1);
}
else if(Num2>Num1 && Num2>Num3)
{
    printf("The largest Number is:%d",Num2);
}
else
{
    printf("The largest Number is :%d",Num3);
}
}