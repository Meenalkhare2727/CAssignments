#include <stdio.h>

// Function to calculate maximum of the array elements
int findMax(int arr[], int size) {
    if (size == 0) {
        printf("Error: Empty array\n");
        return -1; // Return error code for empty array
    }

    int max = arr[0]; // Initialize max to the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }

    return max;
}

// Function to calculate minimum of the array elements
int findMin(int arr[], int size) {
    if (size == 0) {
        printf("Error: Empty array\n");
        return -1; // Return error code for empty array
    }

    int min = arr[0]; // Initialize min to the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }

    return min;
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

    int max = findMax(arr, size);
    if (max != -1) {
        printf("Maximum element in the array: %d\n", max);
    }

    int min = findMin(arr, size);
    if (min != -1) {
        printf("Minimum element in the array: %d\n", min);
    }

    return 0;
}

