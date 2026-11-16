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

    fputc('A', ptr);
    fputc('B', ptr);
    fputc('C', ptr);

    fclose(ptr);

    return 0;
}