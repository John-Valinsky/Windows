Swapping Two Numbers Using Pass-by-Reference in C++

# Question
==========
Write a program for swapping two numbers using pass-by-reference.



# Concept: Pass-by-Reference
============================
In C++, pass-by-reference allows a function to directly modify the original variables by passing references (aliases) instead of copies.



# Why Use Pass-by-Reference?
============================
Allows direct modification without pointers.

Cleaner and safer syntax compared to pointers.

Efficient for large data types or objects.



# Program Explanation
=====================
Code Overview:

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp; // Missing in your code, add to complete swap
}

a and b are references to variables passed from main.

Modifications inside the function reflect in the original variables.



# In main():
============
swapNumbers(x, y);
x and y are passed directly; no need for address-of operator.



# Sample Input/Output
=====================
Input:

Enter two numbers: 10 20

Output:

Before swap (in main):
x = 10, y = 20

Inside swap function:
a = 20, b = 10

After swap (in main):
x = 20, y = 10



# Key Points
============
Feature	Description
int &a, &b	Reference variables (aliases) for x & y
Direct access	No pointers or dereferencing required
swapNumbers()	Swaps values by modifying original variables
