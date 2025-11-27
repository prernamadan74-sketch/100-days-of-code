#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int freq[256] = {0};
    int left = 0, maxLen = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        freq[(int)s[right]]++;

        while (freq[(int)s[right]] > 1) {
            freq[(int)s[left]]--;
            left++;
        }

        int len = right - left + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("%d\n", maxLen);

    return 0;
}
