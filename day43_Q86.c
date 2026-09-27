// Q86: Check if a string is a palindrome
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    while (str[length] != '\0')
    {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}