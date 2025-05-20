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
    cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(2.5, 3.5), c2(1.5, 2.5), c3;

    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1 + c2; // Calls overloaded + operator

     cout << "Sum of Two Complex Numbers: ";
    c3.display();

    return 0;
}
