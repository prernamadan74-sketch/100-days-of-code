#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1 = {"A", 1, 80};
    struct Student s2 = {"A", 1, 80};

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
        printf("Structures are identical\n");
    else
        printf("Structures are different\n");

    return 0;
}
