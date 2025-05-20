//Q. To search an element and print the total time of occurrence in the array.

#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int element) {
    int count = 0;

    // Traverse the array to count the occurrences of the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    return count;
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

    // Get the element to search for
    cout << "Enter the element to search: ";
    cin >> element;

    // Call the function to count occurrences
    int occurrences = countOccurrences(arr, n, element);

    // Print the result
    if (occurrences > 0) {
        cout << "The element " << element << " occurs " << occurrences << " time(s) in the array." << endl;
    } else {
        cout << "The element " << element << " is not found in the array." << endl;
    }

    return 0;
}
