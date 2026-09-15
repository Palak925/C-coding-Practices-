#include <stdio.h>
int main()
{
    int a,b,result;
    char operation;
    printf("Enter Two Number");
    scanf("%d %d",&a ,&b);
    
    printf("Enter operator(+,-,/,*):");
    scanf(" %c",&operation);



    switch (operation)
    {
    case'+': 
       printf("Result=%d",a+b);
        break;
    
    case'-': 
       printf("Result=%d",a-b);
        break;
    case'*': 
       printf("Result=%d",a*b);
        break;
    case'/': 
       printf("Result=%d",a/b);
        break;
    default:
     printf("Invalid operator");
       break;
        
    }
    return 0;
}