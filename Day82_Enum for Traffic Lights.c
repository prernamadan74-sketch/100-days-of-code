#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light signal = YELLOW;

    switch (signal) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
    }
    return 0;
}
