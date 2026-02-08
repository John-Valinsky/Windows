//Q. To delete all occurrence of an element in an array.

#include <iostream>
using namespace std;

void deleteAllOccurrences(int arr[], int& n, int element) {
    int i = 0;

    // Loop through the array to find and delete all occurrences of the element
    while (i < n) {
        if (arr[i] == element) {
            // Shift elements to the left to remove the element
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  // Decrease the size of the array
        } else {
            i++;  // Only move to the next element if no deletion happened
        }
    }
}

void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];  // Array with a max size of 100
    int n, element;

    // Get the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Get the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Get the element to delete
    cout << "Enter the element to delete: ";
    cin >> element;

    // Call the function to delete all occurrences of the element
    deleteAllOccurrences(arr, n, element);

    // Display the modified array
    cout << "After deletion, ";
    displayArray(arr, n);

    return 0;
}
