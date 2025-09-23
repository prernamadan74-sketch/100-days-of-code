#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable (using arithmetic)
    a = a + b;  // sum of both stored in a
    b = a - b;  // subtract original b from sum → gets original a
    a = a - b;  // subtract new b (original a) from sum → gets original b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
