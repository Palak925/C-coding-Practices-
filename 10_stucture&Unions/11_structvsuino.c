#include <stdio.h>

struct Student {
    int age;
    float marks;
};

union Data {
    int age;
    float marks;
};

int main() {
    struct Student s = {20, 85.5f};
    union Data d;

    d.age = 20;

    printf("Structure age: %d\n", s.age);
    printf("Structure marks: %.1f\n", s.marks);

    printf("Union age: %d\n", d.age);

    return 0;
}