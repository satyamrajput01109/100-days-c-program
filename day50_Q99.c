// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    int day, year;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/04/%d", &day, &year);

    printf("Date in new format: %02d-Apr-%d\n", day, year);

    return 0;
}