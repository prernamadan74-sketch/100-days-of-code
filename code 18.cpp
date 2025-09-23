#include <stdio.h>

int main() {
    float percentage;
    char grade;

    // Input percentage
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    // Validate input
    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
        return 0;
    }

    // Assign grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Display result
    printf("Percentage: %.2f%% -> Grade: %c\n", percentage, grade);

    return 0;
}
