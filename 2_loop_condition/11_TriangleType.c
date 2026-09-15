#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Number:");
    scanf("%d %d %d", &a,&b,&c);


if(a+b>c && b+c>a && a+c>b)
 { if(a==b && b==c && a==c)
    {
        printf("its a Equilateral traingle");
    }
    else if (a==b || b==c || a==c)
    {
    printf("its a Isosceles traingle");
    }
    else
    {
    printf("its a Scalene traingle");
    }
 }
 else
{
     printf("invalide Triangle");
}
 
 
  return 0; 
}