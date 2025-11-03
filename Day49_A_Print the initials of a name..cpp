#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    char name[200];
    int i = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first letter of the name (if it's an alphabet)
    if (isalpha(name[0]))
        printf("%c", toupper(name[0]));

    // Print initials after each space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha(name[i])) {
            printf(".%c", toupper(name[i]));
        }
    }

    printf("\n");

    return 0;
}
