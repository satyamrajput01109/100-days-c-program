//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char word[100];
    char longest[100];

    int i = 0;
    int j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (1)
    {
        // Store characters of current word
        if (sentence[i] != ' ' &&
            sentence[i] != '\n' &&
            sentence[i] != '\0')
        {
            word[j] = sentence[i];
            j++;
        }
        else
        {
            // End current word
            word[j] = '\0';

            // Check if current word is longest
            if (j > maxLength)
            {
                maxLength = j;
                strcpy(longest, word);
            }

            // Start a new word
            j = 0;

            // Stop at end of sentence
            if (sentence[i] == '\n' ||
                sentence[i] == '\0')
            {
                break;
            }
        }

        i++;
    }

    printf("\nLongest word = %s", longest);
    printf("\nLength = %d\n", maxLength);

    return 0;
}