//Q. To perform binary search operation.

#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

 while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow

        // Check if the target is at the mid
        if (arr[mid] == target) {
            return mid;  // Target found, return index
        }

        // If the target is smaller than mid, search in the left half
        if (arr[mid] > target) {
            high = mid - 1;
        }
        // If the target is larger than mid, search in the right half
        else {
            low = mid + 1;
        }
    }
