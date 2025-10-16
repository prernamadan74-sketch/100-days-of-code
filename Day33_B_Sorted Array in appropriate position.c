#include <stdio.h>

int main() {
    int n, i, pos, element;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the correct position to insert
    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > element) {
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = element;
    n++;  // Update array size

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
