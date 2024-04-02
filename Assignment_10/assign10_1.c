#include <stdio.h>

// Function to count the number of '1' bits in a given number
int countOnes(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1; // Add 1 to count if the least significant bit is 1
        num >>= 1; // Right shift the number by 1 bit
    }
    return count;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number of '1' bits in %d is: %d\n", number, countOnes(number));

    return 0;
}

