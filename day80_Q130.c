//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i, roll;
    char name[50];
    float marks;

    // Open file for writing
    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%49s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read and display records
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}
