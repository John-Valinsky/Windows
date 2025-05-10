//Q. Write a Program to find the factorial of a number.

#include <iostream>
using namespace std;

int main() {

    int n;
    unsigned long long factorial = 1;

    // Input a number
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check for negative number
    if (n < 0) {

    cout << "Factorial is not defined for negative numbers." << endl;
    } else {

    // Calculate factorial using a loop
    for (int i = 1; i <= n; ++i) {
