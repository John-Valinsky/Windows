Insertion Sort Implementation in C++

Q. Write a C++ program to perform Insertion Sort on an array.



# Description
=============
This program implements Insertion Sort, a simple and efficient sorting algorithm especially effective for small or nearly sorted arrays. It builds the final sorted array one element at a time.



# How Insertion Sort Works
==========================
For each element:

Compare it with elements to its left.

Shift larger elements to the right.

Insert the current element at the correct position.



# Pseudocode
============
for i = 1 to size-1:
    key = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > key:
        arr[j + 1] = arr[j]
        j--
    arr[j + 1] = key



# Sample Output
===============
Original array: 64 34 25 12 22 11 90  
Sorted array: 11 12 22 25 34 64 90



# Time Complexity
=================
Case					Time Complexity
Best (already sorted)	O(n)
Average					O(n²)
Worst					O(n²)