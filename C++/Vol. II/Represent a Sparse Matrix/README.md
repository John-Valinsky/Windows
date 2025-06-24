Sparse Matrix Representation using Linked List (C++)

Q. Write a C++ program to represent a Sparse Matrix using a linked list.



# Description
=============
This program efficiently stores and represents a sparse matrix — a matrix with mostly zero values — using a linked list. Each non-zero element is stored as a node containing:

Row index

Column index

Non-zero value

This reduces memory usage compared to storing every element in a 2D array.



# Data Representation
=====================
Each node in the linked list stores:

[row, col, value]
For example, the matrix:

0 5 0 0 0
0 0 0 8 0
0 0 10 0 0
0 0 0 0 6

Is represented in the list as:

[0,1,5] → [1,3,8] → [2,2,10] → [3,4,6]



# Features
==========
* Insert non-zero values only

*  Dynamically allocate memory for non-zero entries

* Display the full matrix by reconstructing from the list

* Free memory upon program exit



# Sample Output
===============
Inserted value 5 at position (0, 1).
Inserted value 8 at position (1, 3).
Inserted value 10 at position (2, 2).
Inserted value 6 at position (3, 4).
