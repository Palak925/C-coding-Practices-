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

    char name[] = "Palak";
    int age = 22;

    fprintf(ptr, "Name: %s\n", name);
    fprintf(ptr, "Age: %d\n", age);

    fclose(ptr);

    return 0;
}