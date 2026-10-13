#include<stdio.h>
int main()
{
    int arr[5] = {25, 10, 40, 5, 30};
    int *ptr = arr;
  int  smallest = *ptr;
    int i;

    for(i=0;i<5;i++)
    {
        if(*(ptr+i)<smallest)
        {
            smallest=*(ptr+i);
        }
    }
    printf("Smallest number=%d",smallest);
    return 0;
}