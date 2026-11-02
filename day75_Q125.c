//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a new line of text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}