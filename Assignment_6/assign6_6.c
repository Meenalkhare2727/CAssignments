#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to convert a number to a string (simulate itoa)
void itoa(int number, int base, char* str) {
    int i = 0;
    int isNegative = 0;

    // Handle negative numbers for base 10
    if (number < 0 && base == 10) {
        isNegative = 1;
        number = -number;
    }

    // Convert the number to string
    do {
        int remainder = number % base;
        str[i++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
        number /= base;
    } while (number != 0);

    // Add negative sign for base 10
    if (isNegative) {
        str[i++] = '-';
    }

    str[i] = '\0'; // Null-terminate the string

    // Reverse the string
    reverse(str);
}

int main() {
    int number = -12345;
    int base = 10;
    char str[100];

    itoa(number, base, str);

    printf("Number: %d\n", number);
    printf("String: %s\n", str);

    return 0;
}

