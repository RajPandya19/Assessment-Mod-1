#include <stdio.h>

// User input
void input(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Display
void dsl(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Mul
void mul(int A[2][2], int B[2][2], int res[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int a[2][2], b[2][2], res[2][2];

    printf("Enter first matrix:\n");
    input(a);
    printf("\nFirst Matrix:\n");
    dsl(a);

    printf("\nEnter second matrix:\n");
    input(b);
    printf("\nSecond Matrix:\n");
    dsl(b);

    mul(a, b, res);

    printf("\nResult of  Matrix (A x B):\n");
    dsl(res);

    return 0;
}
