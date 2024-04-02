#include <stdio.h>
#include <stdbool.h>

// Function to implement a four-function calculator
int calculator(double operand1, double operand2, char operator, double *result) {
    // Check if the operator is valid
    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Error: Invalid operator\n");
        return 1; // Error: Invalid operator
    }

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            *result = operand1 + operand2;
            break;
        case '-':
            *result = operand1 - operand2;
            break;
        case '*':
            *result = operand1 * operand2;
            break;
        case '/':
            // Check if the denominator is zero
            if (operand2 == 0) {
                printf("Error: Division by zero\n");
                return 1; // Error: Division by zero
            } else {
                *result = operand1 / operand2;
            }
            break;
    }

    return 0; // Success
}

int main() {
    double operand1, operand2, result;
    char operator;

    printf("Enter operand1: ");
    scanf("%lf", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter operand2: ");
    scanf("%lf", &operand2);

    // Perform the calculation
    int error = calculator(operand1, operand2, operator, &result);

    // Print the result if no error occurred
    if (error == 0) {
        printf("Result: %.2lf\n", result);
    }

    return 0;
}

