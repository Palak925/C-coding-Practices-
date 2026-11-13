#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char temp[100];

    printf("Enter your name: ");
    scanf("%99s", temp);

    char *name = malloc((strlen(temp) + 1) * sizeof(char));

    if(name == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    strcpy(name, temp);

    printf("Your name is: %s", name);

    free(name);
    name = NULL;

    return 0;
}