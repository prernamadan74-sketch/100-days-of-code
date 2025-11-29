#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[20];
    enum Gender g;
};

int main() {
    struct Person p = {"Siya", FEMALE};

    if (p.g == MALE) printf("Gender: Male\n");
    else if (p.g == FEMALE) printf("Gender: Female\n");
    else printf("Gender: Other\n");

    return 0;
}
