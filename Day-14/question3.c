#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    largest = second = -99999; // assuming input won’t go below this

    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if(second == -99999) {
        printf("No second largest element (all elements are equal).\n");
    } else {
        printf("Second largest element is %d\n", second);
    }

    return 0;
}
