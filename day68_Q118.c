// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n, sum = 0, expectedSum;

    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("%d", expectedSum - sum);

    return 0;
}