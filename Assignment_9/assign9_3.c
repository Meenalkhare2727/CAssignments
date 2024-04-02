#include <stdio.h>
#include <stdlib.h>

// Function to copy contents from source file to destination file line by line
void copyFileLineByLine(FILE *source, FILE *destination) {
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), source) != NULL) {
        fputs(buffer, destination);
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];

    // Open source file in read mode
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in write mode
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFilename);
    destinationFile = fopen(destinationFilename, "w");
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

