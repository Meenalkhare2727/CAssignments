#include <stdio.h>
#include <string.h>

// Function to remove all occurrences of any character in string1 from string2
void removeChars(char *string1, char *string2) {
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    int i, j, k;

    // Iterate through each character in string1
    for (i = 0; i < len1; i++) {
        // Iterate through string2 and remove occurrences of character from string1
        for (j = k = 0; j < len2; j++) {
            if (string2[j] != string1[i]) {
                string2[k++] = string2[j];
            }
        }
        string2[k] = '\0'; // Null-terminate string2 after removing occurrences of character
        len2 = k; // Update the length of string2
    }
}

int main() {
    char string1[100], string2[100];

    printf("Enter string1: ");
    scanf("%s", string1);

    printf("Enter string2: ");
    scanf("%s", string2);

    removeChars(string1, string2);

    printf("String2 after removing all occurrences of any character in string1: %s\n", string2);

    return 0;
}

