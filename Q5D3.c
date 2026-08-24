// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter temp(in Celsius) to convert to F:");
    scanf("%d", &a);
    b = (a * 9 / 5) + 32;
    printf("The value in F is: %d", b);
    return 0;
}