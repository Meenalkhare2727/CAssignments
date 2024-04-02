#include <stdio.h>

// Function to print a number in binary format
void printBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int bits[32]; // Assuming 32-bit integer
    int index = 0;

    // Convert the number to binary
    while (num > 0) {
        bits[index++] = num % 2;
        num /= 2;
    }

    // Print the binary representation
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation of %d is: ", num);
    printBinary(num);
    printf("\n");

    return 0;
}

