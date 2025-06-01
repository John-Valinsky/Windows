Function Overloading: Area of Circle, Triangle, and Rectangle in C++

# Program Title
===============
Area Calculation Using Function Overloading in C++


# Description
=============
This program demonstrates function overloading in C++. The AreaCalculator class contains multiple area() methods:

One for calculating the area of a circle.

Another for a triangle.

And one more for a rectangle.

Each method has a different parameter list, allowing the compiler to choose the correct one based on the number and types of arguments passed.



# Features
==========
Calculates area of:

Circle (using radius)

Triangle (using base and height)

Rectangle (using length and breadth)

Demonstrates compile-time polymorphism through function overloading.



# Concepts Used
===============
Concept	Explanation
Function Overloading	Same function name (area) with different parameter types and counts.
Encapsulation	All area calculations are encapsulated inside the AreaCalculator class.
Math Library	M_PI from <cmath> is used to get the value of π.



# Class Definition
==================
class AreaCalculator {
public:
    double area(double radius);                  // Circle
    double area(double base, double height);     // Triangle
    int    area(int length, int breadth);        // Rectangle
};
