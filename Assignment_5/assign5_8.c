#include <stdio.h>

// Function to search for a number in an array using linear search
int linearSearch(int arr[], int size, int target) {
    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // If the current element is equal to the target, return its index
        if (arr[i] == target) {
            return i;
        }
    }
    // If the target is not found, return -1
    return -1;
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
    int index = linearSearch(arr, size, target);

    if (index != -1) {
        printf("Number %d found at index %d\n", target, index);
    } else {
        printf("Number %d not found in the array\n", target);
    }

    return 0;
}

