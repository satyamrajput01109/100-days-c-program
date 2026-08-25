/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of units consumed: ");
    scanf("%d", &a);
    if (a <= 100)
    {
        printf("Bill: Rs. %d\n", a * 5);
    }
    else if (a <= 200)
    {
        printf("Bill: Rs. %d\n", (100 * 5) + ((a - 100) * 7));
    }
    else if (a <= 300)
    {
        printf("Bill: Rs. %d\n", (100 * 5) + (100 * 7) + ((a - 200) * 10));
    }
    else
    {
        printf("Bill: Rs. %d\n", (100 * 5) + (100 * 7) + (100 * 10) + ((a - 300) * 12));
    }
    return 0;
}