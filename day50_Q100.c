// Q100: Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    printf("All substrings are:\n");

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}