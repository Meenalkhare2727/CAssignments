#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2D matrix
int **allocateMatrix(int rows, int cols) {
    // Allocate memory for row pointers
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }

    return matrix;
}

// Function to free memory allocated for a 2D matrix
void freeMatrix(int **matrix, int rows) {
    // Free memory for each row
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    // Free memory for row pointers
    free(matrix);
}

int main() {
    int rows = 3;
    int cols = 4;

    // Allocate memory for a 3x4 matrix
    int **matrix = allocateMatrix(rows, cols);

    // Initialize matrix elements
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = count++;
        }
    }

    // Print matrix elements
    printf("Matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Free memory allocated for the matrix
    freeMatrix(matrix, rows);

    return 0;
}

