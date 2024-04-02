#include <stdio.h>
#include <string.h>

// Function to convert a decimal number to its Roman numeral equivalent
char* decimalToRoman(int num) {
    static char romanNum[20]; // Static array to hold the Roman numeral
    strcpy(romanNum, ""); // Clear the string

    // Define arrays for Roman numerals and their corresponding decimal values
    int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Iterate through the decimal values and append the corresponding Roman symbols
    for (int i = 0; num > 0; i++) {
        while (num >= decimalValues[i]) {
            strcat(romanNum, romanSymbols[i]);
            num -= decimalValues[i];
        }
    }

    return romanNum;
}

// Function to convert a Roman numeral to its decimal equivalent
int romanToDecimal(char* roman) {
    // Define arrays for Roman symbols and their corresponding decimal values
    char symbols[] = "IVXLCDM";
    int values[] = {1, 5, 10, 50, 100, 500, 1000};

    int result = 0;
    int prevValue = 0;

    // Iterate through the Roman numeral from right to left
    for (int i = strlen(roman) - 1; i >= 0; i--) {
        // Find the value of the current symbol
        int currValue = 0;
        for (int j = 0; j < sizeof(symbols); j++) {
            if (symbols[j] == roman[i]) {
                currValue = values[j];
                break;
            }
        }

        // If the previous value is smaller than the current one, subtract it
        if (prevValue > currValue) {
            result -= currValue;
        } else {
            result += currValue;
        }

        // Update the previous value for the next iteration
        prevValue = currValue;
    }

    return result;
}

int main() {
    int decimalNumber = 3546;
    char romanNumeral[20];

    // Convert decimal number to Roman numeral
    char* roman = decimalToRoman(decimalNumber);
    printf("Decimal number %d in Roman numerals: %s\n", decimalNumber, roman);

    // Convert Roman numeral back to decimal number
    int decimal = romanToDecimal(roman);
    printf("Roman numeral %s in decimal: %d\n", roman, decimal);

    return 0;
}

