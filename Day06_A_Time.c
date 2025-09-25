#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;            // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;  // remaining minutes
    seconds = totalSeconds % 60;           // remaining seconds

    // Display result
    printf("Time in hh:mm:ss format = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
