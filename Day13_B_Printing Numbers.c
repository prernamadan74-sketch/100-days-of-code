#include <stdio.h>

int main() {
    int n, i;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
