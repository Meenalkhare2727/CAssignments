#include <stdio.h>

// Structure to store school student information
struct Student {
    unsigned int rollNumber: 16; // 16 bits for roll number
    char name[50];
    unsigned int standard: 4; // 4 bits for standard (up to 12th standard)
    unsigned int gender: 1; // 1 bit for gender (0 for male, 1 for female)
    unsigned int age: 6; // 6 bits for age (maximum age of 32 years)
};

int main() {
    struct Student students[3];

    // Accept information for 3 students from the user
    for (int i = 0; i < 3; i++) {
        printf("Enter Roll Number for student %d: ", i + 1);
        scanf("%u", &students[i].rollNumber);

        printf("Enter Name for student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);

        printf("Enter Standard for student %d (1-12): ", i + 1);
        scanf("%u", &students[i].standard);

        printf("Enter Gender for student %d (0 for male, 1 for female): ", i + 1);
        scanf("%u", &students[i].gender);

        printf("Enter Age for student %d (0-32): ", i + 1);
        scanf("%u", &students[i].age);
    }

    // Display the information of 3 students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %u\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Standard: %u\n", students[i].standard);
        printf("Gender: %s\n", students[i].gender == 0 ? "Male" : "Female");
        printf("Age: %u\n", students[i].age);
        printf("\n");
    }

    return 0;
}

