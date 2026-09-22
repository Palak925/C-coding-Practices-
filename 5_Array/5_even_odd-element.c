#include <stdio.h>
int main()
{
    int i , arr[100];
    int size , even=0, odd=0;
    printf("Enter the size: \n");
    scanf("%d", &size);
    
   // printf("Enter the element:");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i]%2==0)
           even++;
       else
       
       odd++;

    }

    printf("Even count=%d\n", even);
    printf("odd count=%d\n", odd);
    return 0;
    
    
}