Swapping Two Numbers Using Pass-by-Address in C++

# Question
==========
Write a program for swapping two numbers using pass-by-address.



# Concept: Pass-by-Address (Using Pointers)
===========================================
In C++, passing variables by address (i.e., using pointers) allows a function to directly modify the original values of variables in memory.



# Why Use Pointers?
===================
Efficient for modifying values directly.

Useful for memory-sensitive applications and in-place changes.



# Program Explanation
=====================
Code Overview:

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

*a and *b are dereferenced pointers to actual x and y values.

Swapping is done inside the function using a temporary variable.



# In main()
===========
swapNumbers(&x, &y);
&x and &y pass the memory address of variables x and y to the function.



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
int* a, *b	Pointers to hold memory addresses of x & y
*a, *b	Access and modify the actual values
swapNumbers()	Swaps the values using a temporary variable