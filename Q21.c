// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the number of month:");
    scanf("%d", &m);
    switch (m)
    {
    case 1:
        printf("January\n No. of Days=31");
        break;
    case 2:
        printf("February\n No. of days=28/29");
        break;
    case 3:
        printf("March\n No. of days=31");
        break;
    case 4:
        printf("April\n No. of days=30");
        break;
    case 5:
        printf("May\n No. of days=31");
        break;

    case 6:
        printf("June\n No. of days=30");
        break;
    case 7:
        printf("July\n No. of days=31");
        break;
    case 8:
        printf("August\n No. of days=31");
        break;
    case 9:
        printf("September\n No. of days=30");
        break;
    case 10:
        printf("October\n No. of days=31");
        break;
    case 11:
        printf("November\nNo. of days=30");
        break;
    case 12:
        printf("December\nNo. of days=31");
        break;
    default:
        printf("Invalid Input!");
    }
    return 0;
}