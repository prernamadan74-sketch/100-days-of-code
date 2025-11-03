#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m;

    printf("Enter date in format dd/mm/yyyy: ");
    fgets(date, sizeof(date), stdin);

    // Remove newline if present
    date[strcspn(date, "\n")] = '\0';

    // Extract day, month, and year using substrings
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strcpy(year, date + 6);

    m = atoi(month); // Convert month to integer

    if (m < 1 || m > 12) {
        printf("Invalid month entered!\n");
        return 0;
    }

    printf("Formatted date: %s-%s-%s\n", day, months[m - 1], year);

    return 0;
}
