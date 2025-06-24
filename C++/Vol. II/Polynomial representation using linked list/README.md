Polynomial Representation Using Linked List in C++

Q. Write a C++ program to represent polynomials using linked lists and perform polynomial addition.



# Description
=============
This program demonstrates how to use a singly linked list to represent a polynomial, where each node contains:

A coefficient (coeff)

An exponent (exp)

A pointer to the next term

It also supports the addition of two polynomials and displays the result in readable algebraic form.



# Polynomial Representation
===========================
A polynomial like:

5x^3 + 4x^2 + 2x + 1
...is stored as a linked list like:

[5, 3] → [4, 2] → [2, 1] → [1, 0]
Each node represents a term with its coefficient and exponent.
