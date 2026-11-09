#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = malloc(5 * sizeof(int));

    if(ptr == NULL)
    {
        return 1;
    }

    ptr[0] = 10;

    printf("%d", ptr[0]);

    // Forgot to use free(ptr);

    return 0;
}