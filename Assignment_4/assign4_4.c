#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to print Pascal's triangle
void printPascalTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);

    printPascalTriangle(numRows);

    return 0;
}

