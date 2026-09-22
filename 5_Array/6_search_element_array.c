#include <stdio.h>
int main()
{   int i;
    int arr[5];
    int search;
    int found = 0;

   
   printf("Enter the element: ");
    for(i=0;i<5;i++) 
    {
       scanf("%d",&arr[i]);
   
    }
   printf("Enter number to search: ");
    scanf("%d", &search);
    for(i=0;i<5;i++) 
    {

       if(arr[i] == search)
       {
        found = 1;
        printf("Element found at index %d", i);
       }
    }
 if(found == 0)
{
    printf("Element not found");
}

 return 0;
}
