#include <stdio.h>

// Function to calculate power using recursion
double power(double base, int exponent) {
    // Base case: if exponent is 0, result is 1
    if (exponent == 0)
        return 1;
    // Recursive case: calculate power using recursion
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else // for negative exponents
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%.2lf raised to the power %d is: %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}

