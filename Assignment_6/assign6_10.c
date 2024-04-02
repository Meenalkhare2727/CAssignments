#include <stdio.h>

// Function to find and replace a substring in a string
void findAndReplace(char *str, const char *find, const char *replace) {
    int i, j, k;
    int len = 0;
    int findLen = 0;
    int replaceLen = 0;

    // Calculate lengths of original string, substring to find, and replacement string
    while (str[len] != '\0') {
        len++;
    }
    while (find[findLen] != '\0') {
        findLen++;
    }
    while (replace[replaceLen] != '\0') {
        replaceLen++;
    }

    // Iterate through the original string
    for (i = 0; i <= len - findLen; i++) {
        // Check if the current substring matches the substring to find
        int match = 1;
        for (j = 0; j < findLen; j++) {
            if (str[i + j] != find[j]) {
                match = 0;
                break;
            }
        }
        // If a match is found, replace the substring
        if (match) {
            // Shift remaining characters to make space for replacement string
            for (j = len - 1, k = len - 1 + replaceLen - findLen; j >= i + findLen; j--, k--) {
                str[k] = str[j];
            }
            // Insert replacement string
            for (j = 0; j < replaceLen; j++, i++) {
                str[i] = replace[j];
            }
            // Update length of the original string
            len = len - findLen + replaceLen;
        }
    }
}

int main() {
    char str[100];
    const char find[] = "fox";
    const char replace[] = "dog";

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    findAndReplace(str, find, replace);

    printf("String after replacement: %s\n", str);

    return 0;
}

