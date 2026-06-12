#include <stdio.h>

int main() {
    int arr[100], n, d, i, j, temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    // Store first d elements in temp
    for(i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements to the left
    for(i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy temp elements to the end
    for(i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
