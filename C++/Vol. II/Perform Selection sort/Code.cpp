//Q. To perform Selection sort.

#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    // Outer loop to traverse through the entire array
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;  // Assume the current element is the minimum

        // Inner loop to find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update the index of the minimum element
            }
        }

        // Swap the minimum element found with the element at the current position
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    selectionSort(arr, size);  // Sort the array

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
