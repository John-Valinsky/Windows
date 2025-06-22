Merge Sort Implementation in C++

Q. Write a C++ program to perform Merge Sort on an array.



# Description
=============
This program implements Merge Sort, a Divide and Conquer based sorting algorithm. It recursively divides the array into halves, sorts them, and merges them back into a single sorted array.



# How Merge Sort Works
======================
Divide: Recursively divide the array into two halves until each sub-array has a single element.

Conquer: Recursively sort the sub-arrays.

Combine: Merge the sorted sub-arrays to produce a sorted whole.



# Pseudocode (Simplified)
=========================
function mergeSort(arr, left, right):
    if left < right:
        mid = (left + right) / 2
        mergeSort(arr, left, mid)
        mergeSort(arr, mid + 1, right)
        merge(arr, left, mid, right)



# Sample Output
===============
Original array: 38 27 43 3 9 82 10  
Sorted array: 3 9 10 27 38 43 82
