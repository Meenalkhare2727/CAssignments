#include <stdio.h>

// Function to calculate the sum of elements in the given row of a matrix
int sumRow(int mat[][3], int row, int cols) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += mat[row][j];
    }
    return sum;
}

// Function to calculate the sum of elements in the given column of a matrix
int sumColumn(int mat[][3], int rows, int col) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += mat[i][col];
    }
    return sum;
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 1;
    int col = 2;

    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of elements in row %d: %d\n", row + 1, sumRow(mat, row, 3));
    printf("Sum of elements in column %d: %d\n", col + 1, sumColumn(mat, 3, col));

    return 0;
}

