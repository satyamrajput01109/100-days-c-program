// Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline added by fgets
    name[strcspn(name, "\n")] = '\0';

    // Find the position of the last space
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    printf("Result: ");

    // Print initials before surname
    printf("%c. ", name[0]);

    for (i = 0; i < lastSpace; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c. ", name[i + 1]);
        }
    }

    // Print surname in full
    printf("%s", &name[lastSpace + 1]);

    return 0;
}