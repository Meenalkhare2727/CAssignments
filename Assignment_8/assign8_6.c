#include <stdio.h>

// Enum to represent grades
enum Grade {
    A,
    B,
    C
};

// Structure to store school student information
struct Student {
    int rollNumber;
    char name[50];
    int standard;
    union {
        enum Grade grade; // Grade for students up to 4th standard
        float percentage; // Percentage for students after 4th standard
    } result;
};

int main() {
    struct Student students[3];

    // Accept information for 3 students from the user
    for (int i = 0; i < 3; i++) {
        printf("Enter Roll Number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name for student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);

        printf("Enter Standard for student %d: ", i + 1);
        scanf("%d", &students[i].standard);

        if (students[i].standard <= 4) {
            printf("Enter Grade (A/B/C) for student %d: ", i + 1);
            char grade;
            scanf(" %c", &grade);
            switch (grade) {
                case 'A':
                    students[i].result.grade = A;
                    break;
                case 'B':
                    students[i].result.grade = B;
                    break;
                case 'C':
                    students[i].result.grade = C;
                    break;
                default:
                    printf("Invalid grade entered!\n");
                    return 1;
            }
        } else {
            printf("Enter Percentage for student %d: ", i + 1);
            scanf("%f", &students[i].result.percentage);
        }
    }

    // Display the information of 3 students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Standard: %d\n", students[i].standard);
        if (students[i].standard <= 4) {
            printf("Grade: ");
            switch (students[i].result.grade) {
                case A:
                    printf("A\n");
                    break;
                case B:
                    printf("B\n");
                    break;
                case C:
                    printf("C\n");
                    break;
            }
        } else {
            printf("Percentage: %.2f%%\n", students[i].result.percentage);
        }
        printf("\n");
    }

    return 0;
}

