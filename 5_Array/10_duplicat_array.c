#include <stdio.h>
int main()
{
    int i , j ,k ,size, arr[100];

     printf("Enter the size of array:");
     scanf("%d", &size);

     printf("Enter the array elements:");
     for(i=0; i< size;i++)
     {
        scanf("%d",&arr[i]);
     }

     for (i=0;i<size;i++)
     {
        for(j=i+1;j<size;j++)
        {
           if(arr[i]=arr[j])
           {
             for(k=j;k<size-1;k++)
              {
                arr[j]=arr[k+1];
              }
              size --;
               j--;
           }
            

        }
     }
printf("Unique array elements");
for(i=0;i < size;i++)
{
    printf("%d ", arr[i]);
}
 return 0;
}