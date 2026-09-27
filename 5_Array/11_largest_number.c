#include <stdio.h>

int main()
{
    int i, size, arr[100], largest;

    printf("Enter the size : ");
    scanf("%d", &size);

    printf("Enter the array elements : ");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element is : %d", largest);

    return 0;
}