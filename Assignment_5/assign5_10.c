#include <stdio.h>

// Function to search for a number in an array using linear search
int* linearSearch(int arr[], int size, int target) {
    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // If the current element is equal to the target, return its address
        if (arr[i] == target) {
            return &arr[i];
        }
    }
    // If the target is not found, return NULL
    return NULL;
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Invalid array size\n");
        return 1; // Exit the program with error status
    }

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform linear search
    int* address = linearSearch(arr, size, target);

    if (address != NULL) {
        printf("Number %d found at address %p\n", target, (void*)address);
    } else {
        printf("Number %d not found in the array\n", target);
    }

    return 0;
}

