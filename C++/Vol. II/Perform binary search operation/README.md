Binary Search Implementation in C++

Q. Write a C++ program to implement Binary Search on a sorted array and search for a given element.



# Description
=============
This program implements Binary Search, an efficient algorithm to find the position of an element in a sorted array by repeatedly dividing the search interval in half.



# Key Points
============
Works only on sorted arrays

Repeatedly compares the middle element with the target

Eliminates half of the search space each time



# Algorithm Overview
====================
1. Initialize: low = 0, high = size - 1

2. while low <= high:
   a. mid = low + (high - low) / 2
   b. if arr[mid] == target → return mid
   c. else if arr[mid] > target → high = mid - 1
   d. else → low = mid + 1

3. If not found, return -1



# Sample Input/Output
=====================
Input:

Enter the number to search: 23


Output:

Element found at index 5.


Input:

Enter the number to search: 50


Output:

Element not found in the array.
