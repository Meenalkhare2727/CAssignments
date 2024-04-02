#include <stdio.h>

// Function to check and adjust parity of a byte
unsigned char adjustParity(unsigned char byte) {
    // Count the number of set bits in the byte
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (byte & (1 << i))
            count++;
    }

    // If count is odd, set MSB to make it even parity
    if (count % 2 != 0)
        byte |= (1 << 7);

    return byte;
}

// Function to check whether a byte has even parity
int hasEvenParity(unsigned char byte) {
    // Count the number of set bits in the byte
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (byte & (1 << i))
            count++;
    }

    // Check if count is even
    return count % 2 == 0;
}

int main() {
    unsigned char byte;

    // Prompt user to enter a byte
    printf("Enter a byte (in decimal): ");
    scanf("%hhu", &byte);

    // Check if byte has even parity
    if (hasEvenParity(byte))
        printf("Byte has even parity.\n");
    else {
        printf("Byte has odd parity. Adjusting...\n");
        byte = adjustParity(byte);
        printf("Adjusted byte (in decimal): %hhu\n", byte);
    }

    return 0;
}

