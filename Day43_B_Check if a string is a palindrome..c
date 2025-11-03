#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 1;  // Not a palindrome
            break;
        }
    }

    if (flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
