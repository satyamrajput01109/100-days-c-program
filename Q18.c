/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main()
{
    int m;
    printf("Enter your marks:");
    scanf("%d", &m);
    if (m >= 90 && m <= 100)
    {
        printf("Grade A!!!");
    }
    else if (m >= 80 && m <= 89)
    {
        printf("Grade B!");
    }
    else if (m >= 70 && m <= 79)
    {
        printf("Grade C");
    }
    else if (m >= 60 && m <= 69)
    {
        printf("Grade D(Better luck next time)");
    }
    else if (m >= 0 && m < 60)
    {
        printf("Grade F");
    }
    else
    {
        printf("Enter correct marks, you fool!");
    }
    return 0;
}