#include <stdio.h>

enum Days {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY
};

int main() {
    enum Days today = WEDNESDAY;

    printf("%d\n", today);

    return 0;
}