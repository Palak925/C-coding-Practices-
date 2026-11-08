#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(5 * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &ptr[i]);
    }

    printf("\nArray elements: ");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}