#include <stdio.h>

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
                printf("Error: Division by zero\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator\n");
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

    printf("Result: %.2f\n", calculate(operand1, operand2, operator));

    return 0;
}

