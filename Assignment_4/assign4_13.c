#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int num1, int num2) {
    // Base case: if num2 is 0, GCD is num1
    if (num2 == 0)
        return num1;
    // Recursive case: calculate GCD using recursion
    else
        return gcd(num2, num1 % num2);
}

int main() {
    int num1, num2;

    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Please enter non-negative numbers.\n");
        return 1; // Exit the program with error status
    }

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

