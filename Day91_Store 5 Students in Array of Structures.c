#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll_no, marks of student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\n--- All Students ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%s %d %.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
