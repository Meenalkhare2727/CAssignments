#include <stdio.h>

// Function to print a given number in words
void printNumberInWords(int num) {
    // Arrays to store words for numbers
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *thousands[] = {"", "thousand", "million", "billion", "trillion"};

    // Function to print a number less than 1000 in words
    void printLessThan1000(int num) {
        if (num >= 100) {
            printf("%s hundred ", ones[num / 100]);
            num %= 100;
        }
        if (num >= 11 && num <= 19) {
            printf("%s ", teens[num - 10]);
        } else if (num >= 20) {
            printf("%s ", tens[num / 10]);
            num %= 10;
        }
        if (num >= 1 && num <= 9) {
            printf("%s ", ones[num]);
        }
    }

    if (num == 0) {
        printf("zero");
        return;
    }
    
    // Process each group of three digits
    int index = 0;
    while (num > 0) {
        int part = num % 1000;
        if (part > 0) {
            printf("%s ", thousands[index]);
            printLessThan1000(part);
        }
        num /= 1000;
        index++;
    }
}

int main() {
    int num;
    printf("Enter a number (up to 9999): ");
    scanf("%d", &num);
    
    if (num < 0 || num > 9999) {
        printf("Number out of range\n");
        return 1;
    }

    printf("Number in words: ");
    printNumberInWords(num);
    printf("\n");

    return 0;
}

