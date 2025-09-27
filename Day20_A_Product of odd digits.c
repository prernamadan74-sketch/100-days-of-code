#include <stdio.h>

int main() {
    int num, product = 1, remainder;
    int hasOdd = 0; // Flag to check if there is any odd digit

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; // Store original number

    // Calculate product of odd digits
    while (temp != 0) {
        remainder = temp % 10; // Get last digit
        if (remainder % 2 != 0) { // Check if odd
            product *= remainder;
            hasOdd = 1;
        }
        temp /= 10; // Remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits of %d is: %d\n", num, product);
    else
        printf("There are no odd digits in %d.\n", num);

    return 0;
}
