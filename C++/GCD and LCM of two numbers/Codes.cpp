//Q. Write a Program to find the GCD and LCM of two numbers.

#include <iostream>
using namespace std;

int main() {
        int num1, num2, a, b, gcd, lcm;

        // Input two numbers
        cout << "Enter two positive integers: ";
        cin >> num1 >> num2;

        // Store original values for LCM calculation
        a = num1;
        b = num2;

        // Euclidean Algorithm to find GCD
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;

        // LCM formula: (num1 * num2) / GCD
        lcm = (num1 * num2) / gcd;

         // Output the results
        cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
        cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
