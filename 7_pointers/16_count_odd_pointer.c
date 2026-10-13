#include <stdio.h>
int main()
{
int arr[4] = {8, 11, 14, 17};
int *ptr = arr;
int count = 0;
int i;

for(i=0;i<5;i++)
{
    if(*(ptr+i)%2!=0)
    {
        count++;
    }
}
 printf("Odd numbers=%d",count);
return 0;


}
