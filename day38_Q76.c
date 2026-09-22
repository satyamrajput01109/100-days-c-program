// Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int a[10][10];
    int i, j, n;
    int symmetric = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("Matrix is symmetric.");
    }
    else
    {
        printf("Matrix is not symmetric.");
    }

    return 0;
}