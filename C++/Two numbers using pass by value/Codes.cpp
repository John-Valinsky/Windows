//Q. Write a Program for Swapping of two numbers using pass by value.

#include <iostream>
using namespace std;

// Function to swap numbers (pass by value)
void swapNumbers(int a, int b) {
    int temp = a;
    b = temp;

    cout << "Inside swap function:" << endl;
}

int main() {
    int x, y;
