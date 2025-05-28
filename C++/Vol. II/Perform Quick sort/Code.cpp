//Q. To perform Quick sort.

#include <iostream>
using namespace std;

// Function to perform partition
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;  // Index of smaller element

// Traverse through the array, comparing each element with the pivot
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {  // If current element is smaller than pivot
            i++;  // Increment index of smaller element
            swap(arr[i], arr[j]);  // Swap elements
        }
    }

     // Place the pivot in its correct position
    swap(arr[i + 1], arr[high]);

    return (i + 1);  // Return the partitioning index
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
