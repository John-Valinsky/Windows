//Q. To perform Quick sort.

#include <iostream>
using namespace std;

// Function to perform partition
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;  // Index of smaller element
