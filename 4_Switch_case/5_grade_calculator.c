#include <stdio.h>
int main()
{
    int  mark;
 printf("Enter your mark:");
 scanf("%d",&mark);

 switch (mark/10)
 {
 case 1:
    if(mark>=90 && mark <=100)
    {
        printf("Grade= A");
    }
    break;
 case 2:
 if(mark>=89)
    {
        printf("Grade= B");
    }

case 3:
 if(mark>=79 )
    {
        printf("Grade= C");
    }
case 4:
 if(mark>=69)
    {
        printf("Grade= D");
    }
case 5:
 if(mark>=0 && mark <=59)
    {
        printf("Grade= F");
    }
default:
    if(mark>100)
    {
        printf("Invalide Number");
    }
    break;
 }
 return 0;
}