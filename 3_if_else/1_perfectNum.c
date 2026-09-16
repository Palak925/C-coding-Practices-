#include <stdio.h>
int main()
{
    int n ,sum=0;
    printf("Enter the value: ");
    scanf("%d", &n);


    for(int i=1; i<=n/2;i++)
{
    if (n%i==0)
    {
        sum=sum+i;
        
    }
}
if (sum==n)   
    {
        printf("Perfect Number");
    }
    
     else
    {
         printf("Not a Perfect Number%d",n);
    }

return 0;
}

 /*         n = 6
               ↓
          sum = 0
               ↓
        ┌─────────────┐
        │ i = 1       │
        │ 6 % 1 = 0 ✓ │
        │ sum = 1     │
        └─────────────┘
               ↓
        ┌─────────────┐
        │ i = 2       │
        │ 6 % 2 = 0 ✓ │
        │ sum = 3     │
        └─────────────┘
               ↓
        ┌─────────────┐
        │ i = 3       │
        │ 6 % 3 = 0 ✓ │
        │ sum = 6     │
        └─────────────┘
               ↓
           Loop ends
               ↓
        sum == n ?
               ↓
            6 == 6
               ↓
       PERFECT NUMBER*/