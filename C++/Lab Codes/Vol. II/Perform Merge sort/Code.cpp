//Q. To perform Merge sort.

#include <iostream>
using namespace std;

// Function to merge two subarrays of arr[]
void merge(int arr[], int l, int m, int r) {


    // Find sizes of two subarrays to be merged
    int n1 = m - l + 1;
    int n2 = r - m;

      // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)

     L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];



    // Merge the temporary arrays back into arr[l..r]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
    } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

     // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
          j++;
        k++;
    }
}

// Function to implement merge sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Find the middle point
        int m = l + (r - l) / 2;

        // Recursively sort the two halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
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
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);  // Sort the array

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
