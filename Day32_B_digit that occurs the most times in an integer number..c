#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; // Array to count digits 0-9
    int i, maxDigit, maxCount = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if(num < 0)
        num = -num;

    // Count occurrences of each digit
    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum occurrences
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d (occurs %d times)\n", maxDigit, maxCount);

    return 0;
}
