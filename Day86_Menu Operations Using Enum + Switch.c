#include <stdio.h>

enum Choice { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int a = 10, b = 5;
    enum Choice c = MULTIPLY;

    switch (c) {
        case ADD: printf("Sum = %d\n", a + b); break;
        case SUBTRACT: printf("Difference = %d\n", a - b); break;
        case MULTIPLY: printf("Product = %d\n", a * b); break;
    }
    return 0;
}
