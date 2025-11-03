#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe; use fgets() in practice

    // Find string length manually
    for (j = 0; str[j] != '\0'; j++);

    // Reverse the string in place
    for (i = 0, j = j - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
