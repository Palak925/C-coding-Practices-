#include <stdio.h>
int main()
{
    int i, arr1[100],arr2[100];
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

   printf("Enter array elements: ");
    for(i=0;i<size;i++)
     {
        scanf("%d",&arr1[i]);
     }
 
     for(i=0;i<size;i++)
     {
      arr2[i]=arr1[i];
     }
   
     printf("Array 1 elements: \n");
     for(i=0;i<size;i++)
     {
      printf("%d ", arr1[i]);
     }
   
     printf("\nArray 2 elements: \n");
     for(i=0;i<size;i++)
     {
      printf("%d ", arr1[i]);
     }
 return 0;

}