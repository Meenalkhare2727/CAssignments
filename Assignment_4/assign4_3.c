#include <stdio.h>

void printCharacter(char ch, int times) {
    for (int i = 0; i < times; i++) {
        printf("%c", ch);
    }
    printf("\n");
}

int main() {
    char character;
    int numTimes;

    printf("Enter the character to print: ");
    scanf(" %c", &character);

    printf("Enter the number of times to print: ");
    scanf("%d", &numTimes);

    printCharacter(character, numTimes);

    return 0;
}

