#include <stdio.h>

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    for (int i = SUN; i <= SAT; i++)
        printf("Value = %d\n", i);
    return 0;
}
