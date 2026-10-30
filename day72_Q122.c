//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    // Open the existing file in read mode
    file = fopen("info.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}