#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    float sum = 0, average;

    printf("Enter the size : ");
    scanf("%d", &n);

    printf("Enter the array elements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = sum / n;

    printf("Average is %g", average);

    return 0;
}