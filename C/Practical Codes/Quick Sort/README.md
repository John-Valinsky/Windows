# Quick Sort Implementation in C
--------------------------------
This repository contains a simple and efficient implementation of the **Quick Sort algorithm** in C. The program takes an array of integers from the user, sorts it in **ascending order**, and displays the sorted array.



# Description
-------------
Quick Sort is a divide-and-conquer algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot.

This implementation uses the **Lomuto Partition Scheme**, with the first element as the pivot.



# Features

* Accepts input of up to 100 elements
* Input validation for user-friendliness
* Uses a recursive approach for sorting
* Clean and readable code with comments



# Program Output Example
------------------------
Enter the number of elements in the array (1–100): 7

Enter 7 elements:
56 12 89 34 2 90 11



# Sorted array in ascending order
---------------------------------
2 11 12 34 56 89 90



# How It Works
--------------
* Choose Pivot: Select the first element of the sub-array.

* Partition: Place all smaller elements to the left of the pivot and greater elements to the right.

* Recursion: Recursively sort the sub-arrays on the left and right of the pivot.


