#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s = {"Siya", 101, 89.5};
    display(s);
    return 0;
}
