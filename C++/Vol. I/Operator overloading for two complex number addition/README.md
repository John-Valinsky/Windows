C++ Program: + Operator Overloading for Complex Number Addition

# Question
==========
Write a program to perform + operator overloading for two complex number addition.



# Concepts Covered
==================
Concept	Explanation
Operator Overloading	Customizing the behavior of the + operator for user-defined data types.
Complex Numbers	Numbers of the form a + bi where i² = -1.
Object-Oriented Programming	Encapsulation of complex number logic inside a Complex class.



# Class Structure
=================
class Complex {
private:
    float real;  // Real part
    float imag;  // Imaginary part

public:
    Complex(float r = 0, float i = 0);       // Constructor
    Complex operator+(const Complex &obj);   // Overloaded + operator
    void display();                          // Display function
};



# How + Operator is Overloaded
==============================
Complex Complex::operator+(const Complex &obj) {
    Complex result;
    result.real = real + obj.real;
    result.imag = imag + obj.imag;
    return result;
}
