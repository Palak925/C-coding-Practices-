#include <stdio.h>

struct Student {
    int age;
    float marks;
};

int main() {
    struct Student s1 = {20, 85.5};

    struct Student *ptr = &s1;

    printf("Age: %d\n", ptr->age);
    printf("Marks: %.1f\n", ptr->marks);

    return 0;
}