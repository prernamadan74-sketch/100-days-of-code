#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"Rahul", 101, 45000};
    struct Employee e2;

    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("Name: %s\nID: %d\nSalary: %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}
