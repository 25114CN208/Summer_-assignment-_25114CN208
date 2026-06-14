#include <stdio.h>

int main() {
    int arr[50], n, i, j, temp, min;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for (i = 0; i < n-1; i++) {
        min = i; // assume current index is smallest
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j; // update smallest index
            }
        }
        // swap smallest with current
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    // Output sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
