#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int len, i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    len = strlen(name);

    // Find the position of the last space (before surname)
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    // Print initials for all words except the surname
    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    for (i = 1; i < lastSpace; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i]))
            printf("%c.", toupper(name[i]));
    }

    // Print the surname in full
    if (lastSpace != -1)
        printf(" %s\n", &name[lastSpace + 1]);
    else
        printf("%s\n", name); // If there's only one name

    return 0;
}
