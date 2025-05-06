// Q. Write a program to print the result for following series 1! + 2! + 3! + …………

#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, sum = 0;

    // Input value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Calculate the sum of factorials
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }

    // Display the result
    cout << "Sum of series 1! + 2! + 3! + ... + " << n << "! is: " << sum << endl;

    return 0;
}
