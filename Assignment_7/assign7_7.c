#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if any command line arguments are provided
    if (argc < 2) {
        printf("Usage: %s <name1> <name2> ... <nameN>\n", argv[0]);
        return 1; // Return error status
    }

    printf("List of names:\n");
    // Loop through each command line argument (starting from index 1)
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}

