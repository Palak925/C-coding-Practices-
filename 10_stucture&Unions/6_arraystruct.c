#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s[3] = {
        {"Palak", 20},
        {"Rahul", 21},
        {"Amit", 19}
    };

    printf("%s %d\n", s[0].name, s[0].age);
    printf("%s %d\n", s[1].name, s[1].age);
    printf("%s %d\n", s[2].name, s[2].age);

    return 0;
}