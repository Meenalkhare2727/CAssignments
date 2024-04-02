#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        return true;
    }
    return false;
}

// Function to print the number of days in a given month
void printDaysInMonth(int month, int year) {
    int days;

    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            if (isLeapYear(year)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            printf("Invalid month\n");
            return;
    }

    printf("Number of days in month %d of year %d: %d\n", month, year, days);
}

int main() {
    int year, month;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printDaysInMonth(month, year);

    return 0;
}

