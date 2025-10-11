#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;                 // Extract last digit
    digits = (int)log10(num);        // Count number of digits - 1
    first = num / pow(10, digits);   // Extract first digit

    // Remove first digit and last digit, then swap them
    swapped = last * pow(10, digits) + (num % (int)pow(10, digits) / 10) * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
