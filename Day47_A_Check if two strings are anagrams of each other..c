#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each lowercase alphabet in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            freq1[tolower(str1[i]) - 'a']++;
        }
    }

    // Count frequency of each lowercase alphabet in str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            freq2[tolower(str2[i]) - 'a']++;
        }
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The two strings are anagrams of each other.\n");
    else
        printf("The two strings are NOT anagrams of each other.\n");

    return 0;
}
