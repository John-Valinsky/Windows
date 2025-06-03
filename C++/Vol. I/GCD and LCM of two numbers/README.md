#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);  // LCM formula
}

