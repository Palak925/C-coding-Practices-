#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number");
     scanf("%d",&n);

     if(n<1)
     {
        printf("Invlaid input");
     }
   else
   { int flage=0;

     for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flage =1;
            break;
        }
    }
 if (flage ==0 )
 printf("yes it is prime number");
 else
printf("no it is not a prime number");

   }

   return 0;
}
            

   /*         START
                |
                ↓
            Input n
                |
                ↓ 
           Is n < 1 ?
           /         \
        YES           NO
         |             |
         ↓             ↓
  "Invalid input"   flag = 0
                       |
                       ↓
                     i = 2
                       |
                       ↓
                    i < n ?
                   /      \
                 NO        YES
                 |           |
                 ↓           ↓
            flag == 0 ?   n % i == 0 ?
             /     \        /       \
           YES      NO     YES       NO
            |        |       |         |
            ↓        ↓       ↓         ↓
         PRIME    NOT PRIME  flag=1   i=i+1
                              |         |
                              ↓         |
                            break ------┘  */