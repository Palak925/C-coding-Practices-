#include<stdio.h>
int main()
{
    int arr[5];
    
    
    for(int i=0;i<5;i++)
    
        {   
        printf("Enter the Array elements :");
        scanf("%d", &arr[i]);
        }
    printf("Array elements are:");
    for(int i=0;i<5;i++)
         {   
        printf("%d ",arr[i]);
        
        }
  return 0;
}