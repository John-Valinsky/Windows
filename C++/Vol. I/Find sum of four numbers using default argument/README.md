Sum of Four Numbers Using Default Arguments in a Member Function (C++)

# Program Title
===============
Sum Using Default Arguments in a Member Function



# Description
=============
This program calculates the sum of up to four integers using a member function of a class in C++ with default argument values.
This is a demonstration of default argument passing inside class methods.



# Key Features
==============
Uses class-based approach with a member function sum().

Employs default arguments for flexible function calls.

Clean, reusable, and modular design.



# Concepts Used
===============
Concept	Explanation
Classes & Objects	Logic is encapsulated inside a class Calculator.
Member Function	sum() is defined inside the class and uses default parameters.
Default Arguments	Parameters b, c, and d default to 0 if not provided.



# Function Definition
=====================
int sum(int a, int b = 0, int c = 0, int d = 0);
a is required.

b, c, and d are optional and default to 0.



# Code Flow
===========
Create an object of the Calculator class.

Accept up to 4 numbers from the user.

Call the sum() member function of the object.

Display the calculated result.
