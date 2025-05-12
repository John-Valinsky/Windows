//Q. Write a Program to find reverse of a number.

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    // Input number
    cout << "Enter an integer: ";
    cin >> num;

    int original = num; // Save original number for output

    // Loop to reverse the digits
    while (num != 0) {

    int digit = num % 10;         // Get last digit
    reversed = reversed * 10 + digit; // Append digit
    num = num / 10;               // Remove last digit
 }

    // Output the reversed number
    cout << "Reverse of " << original << " is: " << reversed << endl;
    return 0;
}
