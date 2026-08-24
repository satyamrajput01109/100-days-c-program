// Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int main()
{
    int a, n;
    printf("Enter a number you want to find the sum of first n natural numbers: ");
    scanf("%d", &n);
    a = n * (n + 1) / 2;
    printf("Sum=%d", a);
    return 0;
}