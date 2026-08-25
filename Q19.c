// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of the tiangle\na:");
    scanf("%d", &a);
    printf("\nb: ");
    scanf("%d", &b);
    printf("\nc: ");
    scanf("%d", &c);
    switch ((a == b) + (b == c) + (a == c))
    {
    case 3:
        printf("\nEquilateral");
        break;
    case 1:
        printf("\nIsosceles");
        break;
    default:
        printf("\nScalene");
    }
    return 0;
}