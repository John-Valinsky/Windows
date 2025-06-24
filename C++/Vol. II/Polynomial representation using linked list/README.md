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



# Features
==========
* Insert terms in sorted order by exponent

* Merge terms with same exponents

* Add two polynomials and return the resultant polynomial

* Display polynomial in human-readable form



# Sample Output
===============
Polynomial 1: 5x^3 +4x^2 +2x^1 +1x^0 
Polynomial 2: 3x^3 +5x^2 +2x^1 +4x^0 
Result of addition: 8x^3 +9x^2 +4x^1 +5x^0 
