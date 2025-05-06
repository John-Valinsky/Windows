//Q. Write a program to print multiplication table from 1 to 10.

#include <iostream>
using namespace std;

int main() {

    // Outer loop for numbers 1 to 10
    	for (int i = 1; i <= 10; ++i) {
        cout << "Multiplication Table of " << i << ":\n";


   // Inner loop to multiply by 1 to 10
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
