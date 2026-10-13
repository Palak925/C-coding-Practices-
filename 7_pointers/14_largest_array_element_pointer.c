#include <stdio.h>
int main()
{
    int arr[5]={12, 45, 23, 8, 31};
    int i;
    int *ptr= arr;
    int largest= *ptr;
    for(i=0; i<5;i++)
    { 
        if(*(ptr+i)>largest)
        {
            largest=*(ptr+i);
        }
    }
    printf("Largest element:%d", largest);
    return 0;
}