#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf(" %d", &num);

    if(num>0)
    {  
        if(num%5==0)
        {
            printf("Number is postive & Divisible by 5:%d",num);
        }
       
        else if (num%5==0)
        {  
            printf("Number is Negative but divisble by 5:%d",num);
        }
       else 
        {
            printf("Number is Negative Not divisble by 5:%d",num);
        }
    }
    else
    {
        printf("Zero:%d",num);
    }
 return 0;
}