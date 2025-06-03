Sum of Four Numbers Using Default Arguments in a Member Function

# Program Title
===============
Sum Calculation Using Default Arguments (Class Member Function)



# Description
=============
This program demonstrates the use of default argument passing in a class member function in C++.
The user can input up to four integers, and the program calculates their sum using a single class method.
Any number not entered (or explicitly entered as 0) is treated as zero due to default values.



# Key Features
==============
Uses default arguments inside a member function of a class.

Demonstrates how classes and functions work together in C++.

Supports calling the function with 1 to 4 values.



# Concepts Used
===============
Concept	Explanation
Classes & Objects	The program uses a Calculator class to perform the sum operation.
Member Functions	The sum function is a method of the class Calculator.
Default Arguments	Parameters b, c, and d default to 0 if not explicitly passed.



# Class Definition
==================
class Calculator {
public:
    int sum(int a, int b = 0, int c = 0, int d = 0);
};



# Example Usage
===============
Enter up to 4 numbers (press Enter after each):
Enter first number: 5
Enter second number (or 0 if none): 10
Enter third number (or 0 if none): 0
Enter fourth number (or 0 if none): 3
Sum = 18



# How the Program Works
=======================
The Calculator class contains a member function sum() with default arguments.

In main(), user input is taken for up to 4 numbers.

The sum() function is called via a class object.

The result is displayed using cout.
