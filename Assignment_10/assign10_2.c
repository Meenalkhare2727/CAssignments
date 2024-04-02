#include <stdio.h>

// Function to display a number in binary format
void displayBinary(int num) {
    // Size of integer in bits
    int size = sizeof(int) * 8;

    // Iterate through each bit of the number
    for (int i = size - 1; i >= 0; i--) {
        // Check if the ith bit is set (1) or unset (0)
        if (num & (1 << i))
            printf("1");
        else
            printf("0");

        // Print space after every 4 bits for readability
        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation of %d is: ", number);
    displayBinary(number);

    return 0;
}

