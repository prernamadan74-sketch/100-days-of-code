#include <stdio.h>

int main() {
    int n1, n2, i, j;
    
    // Read size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of first array: ", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    
    // Read size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array: ", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    
    // Merge arrays
    int merged[n1 + n2];
    for(i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for(j = 0; j < n2; j++)
        merged[i + j] = arr2[j];
    
    // Print merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    
    return 0;
}
