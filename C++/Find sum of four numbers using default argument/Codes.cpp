//Q. Write a program to find sum of four numbers using default argument passing in member function.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Member function with default arguments
    int sum(int a, int b = 0, int c = 0, int d = 0) {
        return a + b + c + d;
    }
};

int main() {
    Calculator calc;
    int num1, num2, num3, num4;

    // Input numbers
    cout << "Enter up to 4 numbers (press Enter after each):" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number (or 0 if none): ";
    cin >> num2;

    cout << "Enter third number (or 0 if none): ";
    cin >> num3;

    cout << "Enter fourth number (or 0 if none): ";
    cin >> num4;

    // Call the member function
    int result = calc.sum(num1, num2, num3, num4);

    // Output result
    cout << "Sum = " << result << endl;

    return 0;
}
