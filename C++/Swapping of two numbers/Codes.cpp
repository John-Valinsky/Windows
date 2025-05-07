//Q. Write a Program for Swapping of two numbers using pass by address.

#include <iostream>
using namespace std;


// Function to swap numbers using pointers (pass by address)
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "Inside swap function:" << endl;
    cout << "a = " << *a << ", b = " << *b << endl;
}

int main() {
    int x, y;

  // Input two numbers
    cout << "Enter two numbers: ";
    cin >> x >> y;

  // Before swapping
    cout << "Before swap (in main):" << endl;
    cout << "x = " << x << ", y = " << y << endl;

// Call swap function with addresses
    swapNumbers(&x, &y);

// After swapping
    cout << "After swap (in main):" << endl;
    cout << "x = " << x << ", y = " << y << endl;