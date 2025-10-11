#include <stdio.h>

int main() {
    int i, j, spaces;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (spaces = 5 - i; spaces > 0; spaces--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
