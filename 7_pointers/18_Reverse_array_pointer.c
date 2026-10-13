#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;
    int *ptr=arr;
    int temp;
  
    for(i=0;i<5/2;i++)
    {
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+4-i);
       *(ptr+4-i)=temp;
    }
   printf("Reverse elements is:");
    for(i = 0; i < 5; i++)
{
    printf("%d ", *(ptr + i));
}
return 0;
}