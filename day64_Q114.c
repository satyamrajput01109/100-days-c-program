// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last[256];
    int start = 0, maxLength = 0;

    scanf("%999s", s);

    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = s[i];

        if (last[c] >= start) {
            start = last[c] + 1;
        }

        last[c] = i;

        int length = i - start + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
} 