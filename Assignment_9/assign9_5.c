#include <stdio.h>

// Structure to store student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to write student's record to a text file using formatted I/O
void writeStudentRecord(FILE *file, const struct Student *student) {
    fprintf(file, "%d %s %.2f\n", student->rollNumber, student->name, student->marks);
}

// Function to read student's record from a text file using formatted I/O
void readStudentRecord(FILE *file) {
    struct Student student;
    while (fscanf(file, "%d %s %f", &student.rollNumber, student.name, &student.marks) != EOF) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", student.rollNumber, student.name, student.marks);
    }
}

int main() {
    // Open a file for writing student records
    FILE *writeFile = fopen("student_records.txt", "w");
    if (writeFile == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write some sample student records to the file
    struct Student students[] = {
        {101, "John", 85.5},
        {102, "Alice", 90.0},
        {103, "Bob", 75.8}
    };
    for (int i = 0; i < 3; i++) {
        writeStudentRecord(writeFile, &students[i]);
    }

    // Close the file
    fclose(writeFile);

    // Open the file for reading student records
    FILE *readFile = fopen("student_records.txt", "r");
    if (readFile == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and display student records from the file
    printf("Student Records:\n");
    readStudentRecord(readFile);

    // Close the file
    fclose(readFile);

    return 0;
}

