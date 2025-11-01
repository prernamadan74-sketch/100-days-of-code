#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe; better use fgets(), but okay for simple examples.

    // Loop until we reach the null terminator '\0'
    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
