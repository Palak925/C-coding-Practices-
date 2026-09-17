#include <stdio.h>
int main()
{
    int n=10,i;
    for(i=0;i<n;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}