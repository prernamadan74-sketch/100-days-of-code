#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // notice space before %c to ignore whitespace

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Switch-case for operations
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %d\n", result);
            } else {
                printf("Error: Division by zero not allowed.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result = %d\n", result);
            } else {
                printf("Error: Modulus by zero not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
