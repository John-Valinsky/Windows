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

// Target not found
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
 cout << "Enter the number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << "." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
