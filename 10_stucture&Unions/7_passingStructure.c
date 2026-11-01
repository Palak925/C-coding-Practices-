#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

void display(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}

int main() {
    struct Student s1 = {"Palak", 20};

    display(s1);

    return 0;
}