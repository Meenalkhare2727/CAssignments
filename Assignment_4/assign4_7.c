#include <stdio.h>

// Function to print Fibonacci series
void printFibonacci(int numTerms) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci Series:\n");

    for (int i = 0; i < numTerms; i++) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        printf("%d ", nextTerm);
    }
    printf("\n");
}

int main() {
    int numTerms;

    printf("Enter the number of terms of Fibonacci series: ");
    scanf("%d", &numTerms);

    printFibonacci(numTerms);

    return 0;
}

