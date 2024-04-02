#include <stdio.h>

// Function to convert a string of digits into its numeric equivalent (simulate atoi)
int atoi(const char* string) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Skip leading whitespaces
    while (string[i] == ' ' || string[i] == '\t' || string[i] == '\n') {
        i++;
    }

    // Handle optional sign
    if (string[i] == '-') {
        sign = -1;
        i++;
    } else if (string[i] == '+') {
        i++;
    }

    // Process digits
    while (string[i] >= '0' && string[i] <= '9') {
        result = result * 10 + (string[i] - '0');
        i++;
    }

    // Apply sign
    result *= sign;

    return result;
}

int main() {
    const char* string = "12345";
    int number = atoi(string);

    printf("String: %s\n", string);
    printf("Numeric equivalent: %d\n", number);

    return 0;
}

