#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers within a given range
void printPrimesInRange(int start, int end) {
    printf("Prime numbers in the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printPrimesInRange(start, end);

    return 0;
}

