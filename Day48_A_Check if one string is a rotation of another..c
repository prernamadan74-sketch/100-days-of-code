#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // remove newline

    // If lengths are not equal, they cannot be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }

    // Create a temporary string by concatenating str1 to itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("The strings ARE rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}

