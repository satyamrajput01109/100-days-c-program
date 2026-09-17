// Q66 : Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
{
    int a[100], n, i, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift larger elements one position to the right
    i = n - 1;

    while(i >= 0 && a[i] > element)
    {
        a[i + 1] = a[i];
        i--;
    }

    // Insert element at correct position
    a[i + 1] = element;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}