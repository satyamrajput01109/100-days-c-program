// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int nums[n];
    int answer[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Store product of elements to the left
    int prefix = 1;

    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix = prefix * nums[i];
    }

    // Multiply by product of elements to the right
    int suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    // Print answer
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}