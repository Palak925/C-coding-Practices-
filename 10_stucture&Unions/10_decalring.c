#include <stdio.h>

union Data {
    int number;
    float marks;
};

int main() {
    union Data d = {10};

    printf("Number: %d\n", d.number);

    d.marks = 85.5f;

    printf("Marks: %.1f\n", d.marks);

    return 0;
}