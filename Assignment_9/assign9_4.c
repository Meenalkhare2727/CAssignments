#include <stdio.h>
#include <stdlib.h>

// Function to copy contents from source file to destination file line by line
void copyFileLineByLine(FILE *source, FILE *destination) {
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), source) != NULL) {
        fputs(buffer, destination);
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;

    // Check if source and target filenames are provided as command line arguments
    if (argc != 3) {
        printf("Usage: %s <source_filename> <target_filename>\n", argv[0]);
        return 1;
    }

    // Open source file in read mode
    sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destinationFile = fopen(argv[2], "w");
    if (destinationFile == NULL) {
        printf("Error creating destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file line by line
    copyFileLineByLine(sourceFile, destinationFile);

    // Close files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}

