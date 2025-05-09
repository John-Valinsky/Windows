//Q. Write a Program to find square and cube of a number using inline function.

#include <iostream>
using namespace std;

// Inline function to find square
inline int square(int x) {
    return x * x;
}

// Inline function to find cube
inline int cube(int x) {
return x * x * x;
}

int main() {
    int num;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Call inline functions
    cout << "Square of " << num << " is: " << square(num) << endl;
    cout << "Cube of " << num << " is: " << cube(num) << endl;
    return 0;
}
