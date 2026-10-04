// Q97: Print the initials of a name.
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // Print the first letter
    if (name[0] != ' ')
    {
        printf("%c ", name[0]);
    }

    // Find and print letters after spaces
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
        {
            printf("%c ", name[i + 1]);
        }
    }

    return 0;
}