// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("Error: Division by zero!\n");
        return 0; // Return 0 or handle the error as needed
    }
}

int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Sum: %d\n", add(a, b));
    printf("Difference: %d\n", subtract(a, b));
    printf("Product: %d\n", multiply(a, b));
    printf("Quotient: %d\n", divide(a, b));
    return 0;
}