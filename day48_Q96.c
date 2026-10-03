// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start, end, len;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Remove newline added by fgets
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    start = 0;

    for (i = 0; i <= len; i++)
    {
        // End of a word
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            // Reverse the current word
            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("Result: %s\n", str);

    return 0;
}