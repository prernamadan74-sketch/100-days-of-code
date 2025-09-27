#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Compute Armstrong sum
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    // Check Armstrong
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
