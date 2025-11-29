#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));

    printf("Enter name roll_no marks: ");
    scanf("%s %d %f", s->name, &s->roll_no, &s->marks);

    printf("Student: %s %d %.2f\n", s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}
