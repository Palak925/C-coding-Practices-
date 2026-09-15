#include<stdio.h>
int main()

{
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The Number is positive:%d\n", num);
    }
    else if (num<0)
    {
    printf("The Number is negative:%d\n", num);
    }
    else
    
      {printf(" The Number is Zero:%d\n", num);}
    

    return 0;
}