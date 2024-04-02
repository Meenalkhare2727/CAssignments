#include <stdio.h>
#include <string.h>

// Function to remove all occurrences of a given character from a string
void removeChar(char *str, char ch) {
    int len = strlen(str);
    int i, j;

    // Iterate through the string
    for (i = j = 0; str[i] != '\0'; i++) {
        // If the current character is not the one to be removed, keep it
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }

    // Add null terminator to mark end of the modified string
    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to remove: ");
    scanf(" %c", &ch); // Adding space before %c to consume any leading whitespace characters

    removeChar(str, ch);

    printf("String after removing all occurrences of '%c': %s\n", ch, str);

    return 0;
}

