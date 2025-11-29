#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("Topper: %s %d %.2f\n",
           s[maxIndex].name, s[maxIndex].roll_no, s[maxIndex].marks);

    return 0;
}
