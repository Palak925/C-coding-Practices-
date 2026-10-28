#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s1 = {"Palak", 20, 85.5};

    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%.1f\n", s1.marks);

    return 0;
}