#include <stdio.h>
int main()
{
    int arr[5],i;
   
    int smallest;

  printf("Enter the array element");
  for(i=0;i<5;i++)
  {
    scanf("%d", &arr[i]);
   }
  for(i=1;i<5;i++)
  {if(arr[i]<smallest)
    {
    smallest = arr[0];
    }
  }
 printf("smallest=%d",smallest);

 return 0;

}