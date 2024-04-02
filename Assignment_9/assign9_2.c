#include <stdio.h>
#include <stdlib.h>

// Function to copy contents from source file to destination file
void copyFile(FILE *source, FILE *destination) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    FILE *sourceFile, *destinationFile;
    char filename[100], ch;

    // Open source file in read mode
    printf("Enter the name of the source file: ");
    scanf("%s", filename);
    sourceFile = fopen(filename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Error creating destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file
    copyFile(sourceFile, destinationFile);

    // Close files
    fclose(sourceFile);
    fclose(destinationFile);

    // Open destination file in read mode to display contents
    destinationFile = fopen("destination.txt", "r");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        return 1;
    }

    // Display contents of destination file
    printf("\nContents of destination file:\n");
    while ((ch = fgetc(destinationFile)) != EOF) {
        printf("%c", ch);
    }
    printf("\n");

    // Open destination file in append mode to accept data from user
    destinationFile = fopen("destination.txt", "a");
    if (destinationFile == NULL) {
        printf("Error opening destination file for appending.\n");
        return 1;
    }

    // Accept data from user and write to destination file
    printf("\nEnter data to write to destination file (Press Ctrl+D to stop):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close destination file
    fclose(destinationFile);

    return 0;
}

