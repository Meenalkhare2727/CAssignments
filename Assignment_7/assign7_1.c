#include <stdio.h>

// Function to accept a 2D array from the user
void acceptArray(int rows, int cols, int arr[rows][cols]) {
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print the 2D array
void printArray(int rows, int cols, int arr[rows][cols]) {
    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows and columns for the array: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    acceptArray(rows, cols, arr);
    printArray(rows, cols, arr);

    return 0;
}

