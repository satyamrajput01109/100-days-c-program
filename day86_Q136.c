//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- MENU ---\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", (int *)&choice);

    switch (choice) {
        case ADD:
            printf("Addition = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Subtraction = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Multiplication = %d\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}