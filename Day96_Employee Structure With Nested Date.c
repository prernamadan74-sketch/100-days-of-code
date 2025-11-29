#include <stdio.h>

struct Date {
    int dd, mm, yyyy;
};

struct Employee {
    char name[30];
    int id;
    struct Date join;
};

int main() {
    struct Employee e = {"Siya", 101, {12, 5, 2023}};

    printf("Employee Name: %s\nID: %d\nJoining Date: %02d-%02d-%d\n",
           e.name, e.id, e.join.dd, e.join.mm, e.join.yyyy);

    return 0;
}
