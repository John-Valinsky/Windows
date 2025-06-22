Selection Sort in C++

Q. Write a C++ program to perform Selection Sort on an array.



# Description
=============
This program implements Selection Sort, a simple comparison-based sorting algorithm. It repeatedly selects the smallest element from the unsorted part of the array and swaps it with the first element in that unsorted part.



# How Selection Sort Works
==========================
Start from the beginning of the array.

Find the smallest element in the unsorted part.

Swap it with the element at the current position.

Repeat for the next position until the array is sorted.



# Pseudocode (Simplified)
=========================
for i from 0 to n - 1:
    minIndex = i
    for j from i + 1 to n:
        if arr[j] < arr[minIndex]:
            minIndex = j
    swap arr[i] and arr[minIndex]



# Sample Output
===============
Original array: 64 34 25 12 22 11 90  
Sorted array: 11 12 22 25 34 64 90



# Time and Space Complexity
===========================
Case	Time Complexity
Best	O(n²)
Average	O(n²)
Worst	O(n²)

Space Complexity: O(1) (in-place sorting)



# Advantages
============
Simple to implement and understand

Requires no additional memory



# Disadvantages
===============
Inefficient for large datasets

Time complexity remains O(n²) even if array is partially sorted

