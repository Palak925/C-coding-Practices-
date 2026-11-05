#include <stdio.h>

#pragma pack(1)

struct Student {
    char grade;
    int age;
};

int main() {
    struct Student s;

    printf("Size = %zu bytes", sizeof(s));

    return 0;
}