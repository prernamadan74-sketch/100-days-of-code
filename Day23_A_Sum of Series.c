#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;     // Numerator increases by 2 each term
        denominator += 4;   // Denominator increases by 4 each term
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
