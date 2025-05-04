//Q. Write a Program to check a number is prime or not.

#include <iostream>

using namespace std;

int main() {

    int num, i;
    bool isPrime = true;

    // Input a number
    cout << "Enter a positive number: ";

    cin >> num;

	// 0 and 1 are not prime numbers
    if (num <= 1) {