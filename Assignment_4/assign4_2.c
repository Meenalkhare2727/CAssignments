#include <stdio.h>

int error_flag = 0; // Global error flag

float calculate(float operand1, float operand2, char operator) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                error_flag = 1; // Set error flag
                return 0;
            }
        default:
            printf("Error: Invalid operator\n");
            error_flag = 1; // Set error flag
            return 0;
    }
}

int main() {
    float operand1, operand2;
    char operator;

    printf("Enter operand1: ");
    scanf("%f", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter operand2: ");
    scanf("%f", &operand2);

    float result = calculate(operand1, operand2, operator);

    if (!error_flag) {
        printf("Result: %.2f\n", result);
    } else {
        printf("Error: Division by zero or invalid operator\n");
    }

    return 0;
}

