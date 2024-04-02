#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int length, result;

    // a. strlen()
    printf("Enter a string: ");
    scanf("%s", str1);
    length = strlen(str1);
    printf("Length of the string: %d\n", length);

    // b. strcpy()
    printf("Enter a string to copy: ");
    scanf("%s", str2);
    strcpy(str1, str2);
    printf("Copied string: %s\n", str1);

    // c. strcat()
    printf("Enter a string to concatenate: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // d. strcmp()
    printf("Enter two strings to compare: ");
    scanf("%s%s", str1, str2);
    result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("%s is less than %s\n", str1, str2);
    } else {
        printf("%s is greater than %s\n", str1, str2);
    }

    // e. stricmp()
    printf("Enter two strings to compare (case-insensitive): ");
    scanf("%s%s", str1, str2);
    result = stricmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("%s is less than %s\n", str1, str2);
    } else {
        printf("%s is greater than %s\n", str1, str2);
    }

    // f. strrev()
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    strrev(str1);
    printf("Reversed string: %s\n", str1);

    // g. strchr()
    printf("Enter a string to search: ");
    scanf("%s", str1);
    printf("Enter a character to find: ");
    scanf(" %c", &str2[0]);
    if (strchr(str1, str2[0]) != NULL) {
        printf("Character '%c' found in the string\n", str2[0]);
    } else {
        printf("Character '%c' not found in the string\n", str2[0]);
    }

    // h. strstr()
    printf("Enter a string to search: ");
    scanf("%s", str1);
    printf("Enter a substring to find: ");
    scanf("%s", str2);
    if (strstr(str1, str2) != NULL) {
        printf("Substring '%s' found in the string\n", str2);
    } else {
        printf("Substring '%s' not found in the string\n", str2);
    }

    // i. strncpy()
    printf("Enter a string to copy: ");
    scanf("%s", str1);
    printf("Enter the maximum characters to copy: ");
    scanf("%d", &result);
    strncpy(str3, str1, result);
    str3[result] = '\0';
    printf("Copied string: %s\n", str3);

    // j. strncat()
    printf("Enter a string to concatenate: ");
    scanf("%s", str1);
    printf("Enter a string to concatenate with: ");
    scanf("%s", str2);
    printf("Enter the maximum characters to concatenate: ");
    scanf("%d", &result);
    strncat(str1, str2, result);
    printf("Concatenated string: %s\n", str1);

    // k. strncmp()
    printf("Enter two strings to compare: ");
    scanf("%s%s", str1, str2);
    printf("Enter the maximum characters to compare: ");
    scanf("%d", &result);
    result = strncmp(str1, str2, result);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("%s is less than %s\n", str1, str2);
    } else {
        printf("%s is greater than %s\n", str1, str2);
    }

    // l. strtok()
    printf("Enter a string to tokenize: ");
    scanf("%s", str1);
    char *token = strtok(str1, " ");
    printf("Tokens: ");
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}

