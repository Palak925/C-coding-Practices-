#include<stdio.h>
int main()
{
    int arr1[5] = {12, 24, 36, 48, 60}, arr2[5];
    int i;
    int *ptr1=arr1, *ptr2=arr2;
  printf("Array elements:")
    for(i=0;i<5;i++)
    {
        printf("%d ", *(ptr1+i));
    }



   
   
    return 0;
}