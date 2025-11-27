#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    
    while (str[i] == ' ') i++; // skip leading spaces

    if (str[i] != '\0')
        str[i] = toupper(str[i]);  // first letter

    for (i = i + 1; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);

    printf("%s", str);
    return 0;
}
