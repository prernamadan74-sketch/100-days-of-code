#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);  // unsafe but simple; use fgets() in real programs

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if the character is a letter
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase letters to lowercase for simplicity
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
