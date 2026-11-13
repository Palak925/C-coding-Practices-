#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student *s1;

    s1 = malloc(sizeof(struct Student));

    if(s1 == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &s1->roll);

    printf("Enter marks: ");
    scanf("%f", &s1->marks);

    printf("\nStudent Details\n");

    printf("Roll Number: %d\n", s1->roll);
    printf("Marks: %.2f\n", s1->marks);

    free(s1);
    s1 = NULL;

    return 0;
}