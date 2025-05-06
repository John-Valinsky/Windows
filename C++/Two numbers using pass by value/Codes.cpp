//Q. Write a Program for Swapping of two numbers using pass by value.

#include <iostream>
using namespace std;

// Function to swap numbers (pass by value)
void swapNumbers(int a, int b) {
    int temp = a;
    b = temp;

    cout << "Inside swap function:" << endl;
}

int main() {
    int x, y;

 // Input two numbers
    cout << "Enter two numbers: ";
    cin >> x >> y;

 // Before swapping
    cout << "Before swap (in main):" << endl;
    cout << "x = " << x << ", y = " << y << endl;

// Call swap function
    swapNumbers(x, y);

 // After swapping (note: values remain unchanged in main)
    cout << "After swap (in main):" << endl;
    cout << "x = " << x << ", y = " << y << endl;

