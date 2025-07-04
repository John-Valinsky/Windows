Delete All Occurrences of an Element in an Array (C++)

Q. Write a program in C++ to delete all occurrences of a specific element from an array.



Program Description
===================
This program allows the user to:

Input an array of integers.

Specify an element to delete.

Automatically remove all occurrences of that element from the array by shifting the remaining elements.

Display the final array.



# Key Concepts
==============
Array manipulation

Element shifting

Pass-by-reference (to update the array size after deletions)



# Features
==========
User-defined array input

Deletes all instances of a specified element

Dynamically adjusts the array size after deletion

Clean display of final output



# Logic Explanation
===================
Looping and Deletion
cpp
Copy
Edit
if (arr[i] == element) {
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];  // Shift left
    }
    n--;  // Reduce array size
} else {
    i++;  // Only increment if no deletion happened
}

We don’t increment i when a deletion occurs, so we can re-check the new element that shifted into the current position.



# Sample Output
===============
Enter the number of elements in the array: 6
Enter the elements of the array: 2 3 4 3 5 3
Enter the element to delete: 3
After deletion, Array elements: 2 4 5



# Time Complexity
=================
Operation	Complexity
Worst-case deletion	O(n²) in the worst case (multiple shifts)



# Limitations
=============
Static array with max size of 100. For larger or dynamic arrays, use std::vector.

No input validation for negative size or invalid inputs.

