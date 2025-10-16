#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Update second largest
            largest = arr[i];         // Update largest
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];   // Update second largest if it's not equal to largest
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is %d\n", secondLargest);
    }

    return 0;
}
