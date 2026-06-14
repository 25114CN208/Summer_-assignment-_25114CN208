#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], subtract[rows][cols];

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // subtract matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            subtract[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display result
    printf("Resultant Matrix after subtraction:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", subtract[i][j]);
        }
        printf("\n");
    }

    return 0;
}
