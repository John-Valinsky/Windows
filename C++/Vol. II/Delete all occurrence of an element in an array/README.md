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

