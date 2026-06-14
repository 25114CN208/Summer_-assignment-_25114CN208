#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int i, j, primarySum = 0, secondarySum = 0;

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        primarySum += matrix[i][i];              // Primary diagonal
        secondarySum += matrix[i][n - i - 1];    // Secondary diagonal
    }

    printf("Primary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);
    printf("Total diagonal sum = %d\n", primarySum + secondarySum);

    return 0;
}
