#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparator function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char *argv[]) {
    // Check if any command line arguments are provided
    if (argc < 2) {
        printf("Usage: %s <name1> <name2> ... <nameN>\n", argv[0]);
        return 1; // Return error status
    }

    // Allocate memory for an array to store names
    char **names = (char **)malloc((argc - 1) * sizeof(char *));
    if (names == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Return error status
    }

    // Store command line arguments (names) in the array
    for (int i = 1; i < argc; i++) {
        names[i - 1] = argv[i];
    }

    // Sort the array of names
    qsort(names, argc - 1, sizeof(char *), compareStrings);

    // Display the sorted names
    printf("Sorted list of names:\n");
    for (int i = 0; i < argc - 1; i++) {
        printf("%s\n", names[i]);
    }

    // Free memory allocated for the array of names
    free(names);

    return 0;
}

