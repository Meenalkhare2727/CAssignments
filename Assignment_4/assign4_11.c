#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n * factorial(n-1)
    else
        return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    // Checking if the input number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit the program with error status
    }

    printf("Factorial of %d is %llu\n", n, factorial(n));

    return 0;
}

