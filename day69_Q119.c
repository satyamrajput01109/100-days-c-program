// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[10001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (freq[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }

        freq[arr[i]]++;
    }

    return 0;
}