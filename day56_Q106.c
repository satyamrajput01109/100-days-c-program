// Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    int *result = malloc((size_t)n * sizeof(int));
    int *stack = malloc((size_t)n * sizeof(int));

    if (n > 0 && (!arr || !result || !stack)) {
        free(arr);
        free(result);
        free(stack);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int top = -1;

    /* Scan from right to left, keeping possible next-greater values on a stack. */
    for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }

        result[i] = (top >= 0) ? stack[top] : -1;
        stack[++top] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d%s", result[i], (i == n - 1) ? "\n" : " ");
    }

    free(arr);
    free(result);
    free(stack);
    return 0;
}
