#include <stdio.h>

int main()
{
    int size, i, arr[100], search;
    int found = 0;

  printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("Enter the search elements: ");
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