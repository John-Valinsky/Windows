//Q. To insert and delete elements from appropriate position in an array.

#include <iostream>
using namespace std;

void insertElement(int arr[], int& n, int element, int position) {
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;
    n++;  // Increase the size of the array
}

void deleteElement(int arr[], int& n, int position) {
    if (position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Decrease the size of the array
}

void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];  // Array with size 100 (can be changed)
    int n = 0;     // Initial size of the array

    int choice, element, position;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Insert Element" << endl;
        cout << "2. Delete Element" << endl;
        cout << "3. Display Array" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position to insert the element: ";
                cin >> position;
                insertElement(arr, n, element, position);
                break;

            case 2:
                cout << "Enter the position to delete the element: ";
                cin >> position;
                deleteElement(arr, n, position);
                break;

            case 3:
                displayArray(arr, n);
                break;

            case 4:
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
