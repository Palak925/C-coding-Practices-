#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("student.txt", "w");

    if (ptr == NULL)
    {
        printf("File opening failed");
        return 1;
    }

    fputs("Hello Palak!", ptr);

    fclose(ptr);

    return 0;
}