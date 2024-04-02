#include <stdio.h>

// Function to remove duplicate elements from the array
int removeDuplicates(int arr[], int size) {
    if (size <= 1) {
        return size; // No duplicates to remove
    }

    int uniqueIndex = 0; // Index to track unique elements

    // Iterate through the array
    for (int i = 0; i < size - 1; i++) {
        // If current element is not equal to the next element, it's unique
        if (arr[i] != arr[i + 1]) {
            // Move the unique element to the next available position
            arr[uniqueIndex++] = arr[i];
        }
    }

    // Include the last element, as it's not checked in the loop
    arr[uniqueIndex++] = arr[size - 1];

    // Return the number of unique elements
    return uniqueIndex;
}

int main() {
    int size;

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

    // Remove duplicates and get the number of unique elements
    int uniqueCount = removeDuplicates(arr, size);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

