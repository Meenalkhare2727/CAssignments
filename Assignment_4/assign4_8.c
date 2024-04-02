#include <stdio.h>

// Function to return the next term of Fibonacci series
int nextFibonacci() {
    static int firstTerm = 0, secondTerm = 1, nextTerm;
    if (firstTerm == 0 && secondTerm == 1) {
        nextTerm = 0;
    } else {
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    return nextTerm;
}

int main() {
    int numTerms;

    printf("Enter the number of terms of Fibonacci series to generate: ");
    scanf("%d", &numTerms);

    printf("Fibonacci Series:\n");

    for (int i = 0; i < numTerms; i++) {
        printf("%d ", nextFibonacci());
    }
    printf("\n");

    return 0;
}

