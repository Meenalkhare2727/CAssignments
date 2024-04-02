#include <stdio.h>
#include <string.h>

#define NUM_NAMES 5
#define MAX_NAME_LENGTH 50

// Function to accept five names of students from the user
void acceptNames(char names[][MAX_NAME_LENGTH]) {
    printf("Enter names of %d students:\n", NUM_NAMES);
    for (int i = 0; i < NUM_NAMES; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

// Function to print the names of students
void printNames(char names[][MAX_NAME_LENGTH]) {
    printf("Names of students:\n");
    for (int i = 0; i < NUM_NAMES; i++) {
        printf("%s\n", names[i]);
    }
}

// Function to compare two strings for sorting
int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

// Function to sort the names of students
void sortNames(char names[][MAX_NAME_LENGTH]) {
    qsort(names, NUM_NAMES, MAX_NAME_LENGTH * sizeof(char), compareStrings);
}

int main() {
    char names[NUM_NAMES][MAX_NAME_LENGTH];

    acceptNames(names);
    printf("\n");
    printNames(names);

    sortNames(names);
    printf("\nSorted names of students:\n");
    printNames(names);

    return 0;
}

