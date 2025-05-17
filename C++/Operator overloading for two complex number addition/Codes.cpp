//Q. Write a program to perform + operator overloading for two complex number addition.

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    // Overload + operator using member function
    Complex operator+(const Complex &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    // Display function
    void display() {
