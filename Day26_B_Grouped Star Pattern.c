#include <stdio.h>

int main() {
    int groups[] = {4, 5, 3, 1}; // Number of stars in each group
    int numGroups = 4;

    for (int g = 0; g < numGroups; g++) {
        for (int i = 0; i < groups[g]; i++) {
            printf("*\n");
        }
        printf("\n"); // Blank line after each group
    }

    return 0;
}
