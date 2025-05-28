//Q. To perform Bubble sort.

#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    // Outer loop to pass through the array multiple times
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;  // Flag to check if any swap occurred

