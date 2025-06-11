C++ Program: Find Square and Cube Using Inline Function

# Question
==========
Write a program to find the square and cube of a number using inline functions.



# Concepts Covered
==================
Concept	Description
Inline Function	A function defined with the inline keyword suggests the compiler to insert the function code directly at the point of call (to reduce function call overhead).
Function Inlining	Best for small, frequently-used functions like math operations.



# Code Summary
==============
inline int square(int x) {
    return x * x;
}

inline int cube(int x) {
    return x * x * x;
}

Both square() and cube() are marked inline for efficient repeated use.

Inline avoids the overhead of jumping to function calls by embedding code directly.



# Sample Input/Output
=====================
Input:

Enter a number: 4

Output:
=======

Square of 4 is: 16
Cube of 4 is: 64



# How It Works
==============	
User inputs a number.

square() is called:
square(4) = 4 * 4 = 16

cube() is called:
cube(4) = 4 * 4 * 4 = 64

Results are printed.



Why Inline Functions?
=====================
Benefit	Explanation
Faster Execution	Avoids function call overhead
Saves Time for Small Functions	Good for one-line or small logic functions
Code Readability	Keeps main logic clean while reusing simple code

