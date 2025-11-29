#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    // Allocate memory dynamically
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("Enter name, roll number, and marks: ");
    scanf("%s %d %f", s->name, &s->roll_no, &s->marks);

    // Printing details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
