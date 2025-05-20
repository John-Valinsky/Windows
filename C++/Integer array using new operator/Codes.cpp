//Q. Write a program to create an integer array using new operator and find the sum and average of array elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamic memory allocation using new
    int* arr = new int[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = static_cast<float>(sum) / n;

    // Output results
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}
