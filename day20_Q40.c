// Q40 : Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    long long binary, complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0)
    {
        digit = binary % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("1's complement = %lld", complement);

    return 0;
}
