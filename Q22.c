// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main()
{
    float s, c; // s = selling price, c = cost price
    printf("Enter cost price: ");
    scanf("%f", &c);
    printf("Enter selling price: ");
    scanf("%f", &s);
    if (s > c)
    {
        printf("Profit %.2f%%\n", ((s - c) / c) * 100);
    }
    else if (c > s)
    {
        printf("Loss %.2f%%\n", ((c - s) / c) * 100);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}