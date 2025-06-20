Bubble Sort Implementation in C++

Q. Write a C++ program to perform Bubble Sort on an array.



# Description
=============
This program demonstrates Bubble Sort, a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.



# Key Features
==============
Simple to understand and implement.

Best suited for small datasets.

Stops early if the array is already sorted.



# Algorithm Overview
====================
for (i = 0 to n-1):
    for (j = 0 to n-i-1):
        if (arr[j] > arr[j+1]):
            swap(arr[j], arr[j+1])
Optimized with a swapped flag to exit early if the array becomes sorted before all passes are completed.

