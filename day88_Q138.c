//Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Days {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

int main() {
    enum Days day;

    char *names[] = {
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY"
    };

    for (day = MONDAY; day <= FRIDAY; day++) {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}