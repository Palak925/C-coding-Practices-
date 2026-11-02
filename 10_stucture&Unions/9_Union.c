#include <stdio.h>

union Data {
    int number;
    float decimal;
};

int main() {
    union Data d;

    d.number = 10;
    printf("Number: %d\n", d.number);

    d.decimal = 5.5;
    printf("Decimal: %.1f\n", d.decimal);

    return 0;
}