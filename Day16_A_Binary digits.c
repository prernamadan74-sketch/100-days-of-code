#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  // To store binary digits (max for 32-bit int)

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Edge case for 0
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary
    i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary in reverse
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
