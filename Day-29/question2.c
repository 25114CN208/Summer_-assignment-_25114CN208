#include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE], n = 0;   // initially array empty
    int choice, i, pos, val, search;

    while(1) {
        printf("\n=== Array Operations Menu ===\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Insert
                if(n == SIZE) {
                    printf("Array is full!\n");
                } else {
                    printf("Enter position (0-%d): ", n);
                    scanf("%d", &pos);
                    printf("Enter value: ");
                    scanf("%d", &val);

                    if(pos < 0 || pos > n) {
                        printf("Invalid position!\n");
                    } else {
                        for(i = n; i > pos; i--) {
                            arr[i] = arr[i-1];
                        }
                        arr[pos] = val;
                        n++;
                        printf("Element inserted.\n");
                    }
                }
                break;

            case 2: // Delete
                if(n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter position (0-%d): ", n-1);
                    scanf("%d", &pos);

                    if(pos < 0 || pos >= n) {
                        printf("Invalid position!\n");
                    } else {
                        for(i = pos; i < n-1; i++) {
                            arr[i] = arr[i+1];
                        }
                        n--;
                        printf("Element deleted.\n");
                    }
                }
                break;

            case 3: // Display
                if(n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Search
                if(n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter value to search: ");
                    scanf("%d", &search);
                    int found = 0;
                    for(i = 0; i < n; i++) {
                        if(arr[i] == search) {
                            printf("Element found at position %d\n", i);
                            found = 1;
                            break;
                        }
                    }
                    if(!found) {
                        printf("Element not found!\n");
                    }
                }
                break;

            case 5: // Exit
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
