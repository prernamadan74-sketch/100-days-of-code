#include <stdio.h>

int main() {
    char fname[100];
    scanf("%s", fname);

    FILE *fp = fopen(fname, "r");

    if (fp == NULL) {
        printf("File does not exist!\n");
    } else {
        char line[200];
        while (fgets(line, sizeof(line), fp) != NULL)
            printf("%s", line);

        fclose(fp);
    }

    return 0;
}
