#include <stdio.h>
int main()
{
    int age,citizenship;
 printf("Enter the age");
 scanf("%d %d",&age,&citizenship);

 if(age>=18 )
 {
    if(citizenship==1)
    {
        printf("Eligible to vote",age,citizenship);
    }
    else
    {
        printf("Not Eligible for vote");
    }
 }
 else
 {
    printf("Not Eligilbe for vote", age ,citizenship);
 }
 return 0;
}