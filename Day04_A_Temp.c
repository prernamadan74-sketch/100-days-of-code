#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // Display numbers before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
