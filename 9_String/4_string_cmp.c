#include <stdio.h>
#include <string.h>

int main()
{
    char savedName[] = "Palak";
    char searchName[] = "Palak";

    if (strcmp(savedName, searchName) == 0)
    {
        printf("Contact found!");
    }
    else
    {
        printf("Contact not found!");
    }

    return 0;
}