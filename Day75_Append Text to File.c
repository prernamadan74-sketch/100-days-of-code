#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    char text[200];
    printf("Enter text to append: ");
    getchar();  // clear buffer
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);
    printf("Text appended successfully.\n");

    return 0;
}
