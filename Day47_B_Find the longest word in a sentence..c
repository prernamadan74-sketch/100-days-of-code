#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Traverse each character of the string
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];  // store the current word
        } else {
            word[j] = '\0';  // end the word
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        }
        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLen);

    return 0;
}
