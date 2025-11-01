#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    gets(str);  // for simplicity; use fgets() in real programs

    while (str[i] != '\0') {
        // Check if the character is lowercase (a–z)
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
