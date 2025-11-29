#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    return s[maxIndex];
}

int main() {
    struct Student s[3] = {
        {"A", 1, 78},
        {"B", 2, 92},
        {"C", 3, 85}
    };

    struct Student top = getTopper(s, 3);
    printf("Topper: %s %d %.2f\n", top.name, top.roll_no, top.marks);

    return 0;
}
