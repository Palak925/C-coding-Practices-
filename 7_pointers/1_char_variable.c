#include <stdio.h>

int main()
{
    char ch;
    char *ptr;

    scanf("%c", &ch);

    ptr = &ch;

    printf("Character entered is %c", *ptr);

    return 0;
}