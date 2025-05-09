//Q. Write a Program to find sum of four numbers using default argument passing.

#include <iostream>
using namespace std;

// Function with default values for the last three parameters
int sum(int a, int b = 0, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int num1, num2, num3, num4;

    // Input numbers from user
    cout << "Enter up to 4 numbers (press Enter after each):" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number (or 0 if none): ";
    cin >> num2;

    cout << "Enter third number (or 0 if none): ";
    cin >> num3;

    cout << "Enter fourth number (or 0 if none): ";
    cin >> num4;

    // Call sum function
    int result = sum(num1, num2, num3, num4);

    // Display the result
    cout << "Sum = " << result << endl;

    return 0;
}
