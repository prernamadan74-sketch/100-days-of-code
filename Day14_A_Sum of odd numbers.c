#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // odd numbers are 1, 3, 5, ...
    }

    // Output
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
