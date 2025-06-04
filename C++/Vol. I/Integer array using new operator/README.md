Dynamic Integer Array Using new Operator in C++

#Program Title
==============
Create an Integer Array Dynamically and Calculate Sum and Average



# Description
=============
This program demonstrates how to:

Dynamically allocate an array using the new operator.

Input elements from the user.

Calculate the sum and average of the array elements.

Properly release memory using the delete[] operator.



# Key Features
==============
Demonstrates dynamic memory allocation in C++.

Handles user input for flexible array sizes.

Shows basic arithmetic operations (sum and average).

Implements memory deallocation to avoid leaks.



# Concepts Used
===============
Concept	Description
new operator	Used to allocate memory dynamically at runtime.
delete[] operator	Frees the memory allocated for the array.
static_cast<float>(...)	Type casting to ensure floating-point division for average calculation.



# Program Flow
==============
User enters the number of elements.

Program allocates memory dynamically using new.

User inputs values into the array.

Program computes the sum and average.

Output is displayed.

Memory is released using delete[].



# Sample Output
===============
Enter the number of elements: 5
Enter 5 elements:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

Sum = 150
Average = 30