#include <stdio.h>
int main()
{
    int arr[5] = {10, 15, 22, 7, 8};
int *ptr = arr;
int count = 0;
int i;
for(i=0;i<5;i++)
{ if(*(ptr + i)%2==0)
    {
    count++;
    }
}
printf("Even number=%d", count);
return 0;
}