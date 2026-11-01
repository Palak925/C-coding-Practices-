#include <stdio.h>

struct Student {
    int age;
};

void update(struct Student *ptr) {
    ptr->age = 25;
}

int main() {
    struct Student s1 = {20};

    update(&s1);

    printf("Age: %d\n", s1.age);

    return 0;
}