// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {

        // Decide whether to start a new subarray
        // or continue the previous subarray
        if (arr[i] > currentSum + arr[i])
            currentSum = arr[i];
        else
            currentSum = currentSum + arr[i];

        // Update maximum sum
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);

    return 0;
}