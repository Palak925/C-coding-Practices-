#include <stdio.h>
int main()
{
    int arr[5],i;
   
    int largest;

  printf("Enter the array element");
  for(i=0;i<5;i++)
  {
    scanf("%d", &arr[i]);
   
  }
  for(i=0;i<5;i++)
  {
    largest = arr[i];
  }
 printf("largest=%d",largest);

 return 0;

}