//Q. To perform Bubble sort.

#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    // Outer loop to pass through the array multiple times
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;  // Flag to check if any swap occurred

 // Inner loop to compare and swap adjacent elements
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;  // Mark that a swap occurred
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
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
