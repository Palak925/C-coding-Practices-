#include <stdio.h>

int main()
{
    int size, i, arr[100], search;
    int found = 0;

    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    for(i = 0; i < size; i++)
    {
        if(arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Element Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}