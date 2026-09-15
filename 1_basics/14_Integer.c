/*Number Classification

//Take an integer and determine:
Positive Even
Positive Odd
Negative Even
Negative Odd
Zero*/




#include<stdio.h>
int main()
{
    int Num;
     printf("Enter the Number:");
     scanf("%d",&Num);
 
     if (Num>0)
     { 
        if(Num%2==0)
        {
            printf("positive Even: %d",Num);
        }
        else
        {
            printf("positive odd: %d",Num);
        }
     }
     else if (Num<0)
    
     { if (Num%2!=0)
        {
            printf("Negative odd:%d",Num);
        }
     else
     {
        printf("Negative Even;%d",Num);
     }

    }
    else
    {
       printf("Zero",Num);
    }

    return 0;
}