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

    printf("Before realloc:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[i]);
    }

    int *temp = realloc(ptr, 5 * sizeof(int));

    if(temp == NULL)
    {
        printf("\nReallocation failed");
        free(ptr);
        return 1;
    }

    ptr = temp;

    ptr[3] = 40;
    ptr[4] = 50;

    printf("\nAfter realloc:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}