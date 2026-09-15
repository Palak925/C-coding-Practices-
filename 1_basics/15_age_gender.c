#include <stdio.h>
int main()
{ char Gen[10];
   int age;
   printf ("Enter your gender:\n");
   scanf("%10s" ,&Gen);
   printf("Enter your age\n");
   scanf("%d", &age);
    
   if (age>=18)
   { if (Gen=='Male')
      {
        printf("Adult Male",age,Gen);
      }
    else if (Gen=='Female')
        {
        printf("Adult Female",age,Gen);
         }
    }
 else
 {
    if(Gen=='Male')
    {
        printf("Minor male",age,Gen);
    }
    else
    {
        printf("Minor Female",age,Gen);
    }
 }
    return 0;
}