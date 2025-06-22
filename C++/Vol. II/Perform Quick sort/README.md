Quick Sort in C++

Q. Write a C++ program to perform Quick Sort on an array.



# Description
=============
This program implements Quick Sort, a highly efficient and commonly used Divide and Conquer sorting algorithm. It uses a pivot to partition the array and recursively sorts the subarrays.



# How Quick Sort Works
======================
Choose a pivot element (here, last element).

Partition the array:

Move all elements smaller than pivot to its left.

Move all greater elements to its right.

Recursively apply the above steps to the left and right subarrays.



# Pseudocode (Simplified)
=========================
function quickSort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)



# Sample Output
===============
Original array: 64 34 25 12 22 11 90  
Sorted array: 11 12 22 25 34 64 90
