#include<stdio.h>
int main()
{
    int Marks;
    printf("Enter your mark:");
    scanf("%d",&Marks);

    if(Marks>=40)
    {
        if(Marks>75)
        { 
            printf("Pass with Distinction");
        }
        else if(Marks >= 60)
        {
        printf("Pass With First class");
        }
        else if (Marks >= 50)
        {
        printf("Pass with Distinction");
        }
        else
        {
        printf("Pass");
        }
    }
    else
    {
        printf("fail");
    }
    return 0;
}