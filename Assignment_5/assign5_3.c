#include <stdio.h>

// Function to reverse the elements of an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start index towards the end and end index towards the start
        start++;
        end--;
    }
}

// Function to print array elements
void printArray(int arr[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, size);

    // Reverse the array
    reverseArray(arr, size);

    printf("Reversed array:\n");
    printArray(arr, size);

    return 0;
}

