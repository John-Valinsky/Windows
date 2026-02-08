// Q. Write a Program to find greatest among three numbers using nested if…else statement. 

#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Nested if...else to find the greatest number
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The greatest number is: " << num1 << endl;
        } else {
            cout << "The greatest number is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The greatest number is: " << num2 << endl;
        } else {
            cout << "The greatest number is: " << num3 << endl;
        }
    }

    return 0;
}
