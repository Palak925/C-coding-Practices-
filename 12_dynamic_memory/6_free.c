#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(3 * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    printf("Before freeing memory:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    ptr = NULL;

    printf("\nMemory released successfully");

    return 0;
}