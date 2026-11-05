#include <stdio.h>

struct Student {
    unsigned int age : 7;
};

int main() {
    struct Student s;

    s.age = 21;

    printf("Age = %u", s.age);

    return 0;
}