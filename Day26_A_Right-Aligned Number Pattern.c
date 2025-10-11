#include <stdio.h>

int main() {
    int i, j, spaces;

    // Outer loop for rows (1 to 5)
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }
        // Print numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
