#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
