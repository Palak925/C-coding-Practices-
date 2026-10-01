#include <stdio.h>

int main()
{
    int size;
    int sum = 0;
    float average;

    printf("Enter the size : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements : ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / size;

    printf("Average is %.4g", average);

    return 0;
}