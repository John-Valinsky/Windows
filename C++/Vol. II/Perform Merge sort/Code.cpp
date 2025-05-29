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
