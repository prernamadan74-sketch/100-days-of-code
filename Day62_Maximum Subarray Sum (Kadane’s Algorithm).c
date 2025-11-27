#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxEnding = arr[0], maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        if (maxEnding + arr[i] < arr[i])
            maxEnding = arr[i];
        else
            maxEnding += arr[i];

        if (maxEnding > maxSoFar)
            maxSoFar = maxEnding;
    }

    printf("%d\n", maxSoFar);
    return 0;
}
