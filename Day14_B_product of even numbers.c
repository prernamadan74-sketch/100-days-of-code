#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long to handle large results
    int hasEven = 0;        // To check if at least one even number exists

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop through 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven) {
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    } else {
        printf("No even numbers in the range 1 to %d\n", n);
    }

    return 0;
}
