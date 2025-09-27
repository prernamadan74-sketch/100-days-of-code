#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], onesComplement[100];

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int len = strlen(binary);

    // Calculate 1's complement
    for (int i = 0; i < len; i++) {
        if (binary[i] == '0')
            onesComplement[i] = '1';
        else if (binary[i] == '1')
            onesComplement[i] = '0';
        else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    onesComplement[len] = '\0'; // Null-terminate string

    printf("1's complement of %s is: %s\n", binary, onesComplement);

    return 0;
}
