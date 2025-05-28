//Q. To perform Insertion sort.

#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];  // Element to be inserted
        int j = i - 1;

        // Shift elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift the element
            j--;
        }

        // Insert the key at its correct position
        arr[j + 1] = key;
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

    insertionSort(arr, size);  // Sort the array

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
