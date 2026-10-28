#include <stdio.h>

struct Address {
    char city[30];
    int pin;
};

struct Student {
    char name[30];
    int age;
    struct Address addr;
};

int main() {
    struct Student s1 = {"Palak", 20, {"Mumbai", 400037}};

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("City: %s\n", s1.addr.city);
    printf("PIN: %d\n", s1.addr.pin);

    return 0;
}