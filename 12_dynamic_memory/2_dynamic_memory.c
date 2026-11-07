#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;

    arr = malloc(5 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;

    printf("%d", arr[0]);

    free(arr);

    return 0;
}