#include <stdio.h>

// Function to check whether a character is an alphabet
int isAlphabet(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// Function to perform bitwise XOR operation with 32 if the character is an alphabet
char xorWith32(char c) {
    if (isAlphabet(c)) {
        // Perform bitwise XOR with 32 (binary: 100000)
        return c ^ 32;
    } else {
        return c;
    }
}

int main() {
    char ch;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is an alphabet
    if (isAlphabet(ch)) {
        printf("Character '%c' is an alphabet.\n", ch);
        // Perform XOR operation with 32 and observe the result
        printf("Result of XOR operation with 32: %c\n", xorWith32(ch));
    } else {
        printf("Character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}

