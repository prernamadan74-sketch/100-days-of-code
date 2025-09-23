#include <stdio.h>

int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check positive, negative, or zero using nested if–else
    if (number != 0) {
        if (number > 0) {
            printf("%d is positive.\n", number);
        } else {
            printf("%d is negative.\n", number);
        }
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
