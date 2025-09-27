#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find smaller number
    int min = (num1 < num2) ? num1 : num2;

    // Check for HCF starting from 1 to min
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
