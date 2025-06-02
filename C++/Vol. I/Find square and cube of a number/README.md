Sum of Four Numbers Using Default Arguments in C++

# Program Title
===============
Sum of Numbers Using Default Argument Passing in C++



# Description
=============
This program demonstrates the use of default arguments in C++.
It calculates the sum of up to four numbers, where the last three numbers are optional.
If not all four values are provided, the missing ones default to 0.



# Features
==========
Uses a single function sum() with default parameters.

Supports adding:

Just 1 number

2 numbers

3 numbers

All 4 numbers

Reduces the need to overload functions for different number of parameters.



# Concepts Used
===============
Concept	Explanation
Default Arguments	Function parameters are given default values so fewer arguments can be passed.
Function Parameters	The function sum() can be called with 1–4 arguments without overloading.
Simplicity	One function handles all possible use-cases.



# Function Definition
=====================
int sum(int a, int b = 0, int c = 0, int d = 0);
a is mandatory.

b, c, and d are optional (default to 0).



# Sample Output
===============
Enter up to 4 numbers (press Enter after each):
Enter first number: 5
Enter second number (or 0 if none): 10
Enter third number (or 0 if none): 0
Enter fourth number (or 0 if none): 3
Sum = 18



# Code Flow
===========
The user is prompted to enter 1 to 4 integers.

Any skipped numbers can be entered as 0.

The function sum() calculates and returns the result.

The sum is printed to the console.



# How to Compile and Run
========================
Compile:

g++ sum_default_args.cpp -o sum
