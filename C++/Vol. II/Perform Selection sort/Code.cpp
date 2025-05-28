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
