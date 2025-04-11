# Heap Sort in C (User Input)

This project is a simple C program that implements the **Heap Sort** algorithm using a **Max Heap**. The user provides the input, and the program sorts the array in ascending order.


# Features
----------
* Accepts dynamic input from the user.
* Sorts using Heap Sort algorithm (in-place sorting).
* Validates input size.
* Simple and readable structure.
* Written in standard C (compatible with most compilers).


# How to Compile and Run
------------------------
Using GCC:

	gcc heap_sort.c -o heap_sort
	./heap_sort

Or on Windows used Code Blocks.


# Sample Input / Output
-----------------------
Enter the number of elements: 8
Enter 8 elements:
Element [1]: 9
Element [2]: 16
Element [3]: 32
Element [4]: 8
Element [5]: 4
Element [6]: 1
Element [7]: 5
Element [8]: 0


# Sorted array using Heap Sort
------------------------------
0 1 4 5 8 9 16 32


# Concepts Used
---------------
* Heapify: Maintains the max-heap property.

* Max Heap: Parent node is always greater than or equal to its children.

* Heap Sort Algorithm:

* Build a max heap.

* Extract elements from the heap one by one and adjust the heap.


# File Structure
----------------
heap_sort.c       --> Main source code file
README.md         --> This documentation file


# Requirements
--------------
Any C compiler (e.g., GCC, Turbo C++)

Basic knowledge of data structures and C programming
