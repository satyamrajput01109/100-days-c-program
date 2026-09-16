// Q64 : Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long n;
    int count[10] = {0};
    int digit, i, max = 0, mostDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if(n < 0)
    {
        n = -n;
    }

    if(n == 0)
    {
        count[0] = 1;
    }

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            mostDigit = i;
        }
    }

    printf("Most occurring digit = %d\n", mostDigit);
    printf("Number of times = %d\n", max);

    return 0;
}