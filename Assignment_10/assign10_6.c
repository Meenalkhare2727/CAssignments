#include <stdio.h>

// Function to swap two numbers using XOR operation
void swap(int *a, int *b) {
    // XOR the numbers to swap them without using a temporary variable
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int num1, num2;

    // Prompt user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers
    swap(&num1, &num2);

    // After swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

