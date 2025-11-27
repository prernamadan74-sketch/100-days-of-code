#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Total sum from 1 to n
    long long total = (long long)n * (n + 1) / 2;

    // x^2 must equal total
    long long x = sqrt(total);

    if (x * x == total)
        printf("%lld\n", x);  // pivot integer
    else
        printf("-1\n");       // no pivot

    return 0;
}
