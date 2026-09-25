#include <stdio.h>

int main()
{
    int i, size, arr[100], revers;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements: ");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements before reversing:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < size / 2; i++)
    {
        revers = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = revers;
    }

    printf("\nElements after reversing:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}