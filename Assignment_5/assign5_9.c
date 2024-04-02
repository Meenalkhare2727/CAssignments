#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the middle element is the target, return its index
        if (arr[mid] == target) {
            return mid;
        }
        // If the target is smaller than the middle element, search the left half
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        // If the target is larger than the middle element, search the right half
        else {
            left = mid + 1;
        }
    }

    // If the target is not found, return -1
    return -1;
}

int main() {
    int size, target;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Invalid array size\n");
        return 1; // Exit the program with error status
    }

    int arr[size];

    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform binary search
    int index = binarySearch(arr, size, target);

    if (index != -1) {
        printf("Number %d found at index %d\n", target, index);
    } else {
        printf("Number %d not found in the array\n", target);
    }

    return 0;
}

