#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; // Store original number

    // Calculate sum of digits
    while (temp != 0) {
        remainder = temp % 10; // get last digit
        sum += remainder;      // add to sum
        temp /= 10;            // remove last digit
    }

    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0;
}
