// Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert all letters to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    // Capitalize the first character
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    printf("Sentence case: %s", str);

    return 0;
}