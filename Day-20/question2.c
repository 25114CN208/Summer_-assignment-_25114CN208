#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if(isSymmetric == 0) break;
    }

    if(isSymmetric == 1)
        printf("Matrix is Symmetric.\n");
    else
        printf("Matrix is NOT Symmetric.\n");

    return 0;
}
