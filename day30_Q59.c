// Q59: Count even and odd numbers in an array.
#include <stdio.h>

int main()
{
    int a[5], i;
    int even = 0, odd = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}