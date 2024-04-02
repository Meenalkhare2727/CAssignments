#include <stdio.h>

// Function to calculate maximum and minimum of the array elements
void findMinMax(int arr[], int size, int *max, int *min) {
    if (size == 0) {
        printf("Error: Empty array\n");
        *max = *min = -1; // Return error code for empty array
        return;
    }

    *max = *min = arr[0]; // Initialize max and min to the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Update max if current element is greater
        }
        if (arr[i] < *min) {
            *min = arr[i]; // Update min if current element is smaller
        }
    }
}

int main() {
    int size, max, min;

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

    findMinMax(arr, size, &max, &min);

    if (max != -1 && min != -1) {
        printf("Maximum element in the array: %d\n", max);
        printf("Minimum element in the array: %d\n", min);
    }

    return 0;
}

