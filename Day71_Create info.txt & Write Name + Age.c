#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);
    printf("Data successfully saved to info.txt\n");

    return 0;
}
