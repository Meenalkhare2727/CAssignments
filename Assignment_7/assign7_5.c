#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_NAMES 5
#define MAX_NAME_LENGTH 50

// Function to accept five names of students from the user using an array of character pointers
void acceptNames(char *names[]) {
    printf("Enter names of %d students:\n", NUM_NAMES);
    for (int i = 0; i < NUM_NAMES; i++) {
        printf("Enter name %d: ", i + 1);
        names[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        scanf("%s", names[i]);
    }
}

// Function to print the names of students
void printNames(char *names[]) {
    printf("Names of students:\n");
    for (int i = 0; i < NUM_NAMES; i++) {
        printf("%s\n", names[i]);
    }
}

// Function to compare two strings for sorting
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

// Function to sort the names of students
void sortNames(char *names[]) {
    qsort(names, NUM_NAMES, sizeof(char *), compareStrings);
}

// Function to free memory allocated for student names
void freeMemory(char *names[]) {
    for (int i = 0; i < NUM_NAMES; i++) {
        free(names[i]);
    }
}

int main() {
    char *names[NUM_NAMES];

    acceptNames(names);
    printf("\n");
    printNames(names);

    sortNames(names);
    printf("\nSorted names of students:\n");
    printNames(names);

    freeMemory(names);

    return 0;
}

