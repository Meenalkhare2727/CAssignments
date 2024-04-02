#include <stdio.h>

// Function to calculate the nth term of Fibonacci series using recursion
int fibonacciNthTerm(int n) {
    // Base cases: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case: Fibonacci of n is Fibonacci of (n-1) + Fibonacci of (n-2)
    else
        return fibonacciNthTerm(n - 1) + fibonacciNthTerm(n - 2);
}

// Function to print given number of terms of Fibonacci series
void printFibonacciSeries(int numTerms) {
    printf("Fibonacci Series:\n");
    for (int i = 0; i < numTerms; i++) {
        printf("%d ", fibonacciNthTerm(i));
    }
    printf("\n");
}

int main() {
    int numTerms;

    printf("Enter the number of terms of Fibonacci series to print: ");
    scanf("%d", &numTerms);

    printFibonacciSeries(numTerms);

    return 0;
}

