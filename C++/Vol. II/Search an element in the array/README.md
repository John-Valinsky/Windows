Search Element and Count Occurrences in Array (C++)

Q. Write a C++ program to search for an element in an array and print the total number of times it occurs.



# Description
=============
This program allows the user to:

Input an array of integers

Search for a specific element

Count how many times that element appears in the array

It's a simple example of linear search with frequency counting.



# Core Logic
============
The program uses a for loop to traverse the array and compare each element with the target. A counter variable is incremented each time a match is found.

cpp
Copy
Edit
for (int i = 0; i < n; i++) {
    if (arr[i] == element) {
        count++;
    }
}



# Features
==========
* Accepts user-defined array size and values

*  Searches for any integer element

* Prints how many times the element occurs

* Displays a message if the element is not found



# Sample Output
===============
Enter the number of elements in the array: 6
Enter the elements of the array: 1 2 3 2 4 2
Enter the element to search: 2
The element 2 occurs 3 time(s) in the array.


Another example:

Enter the element to search: 5
The element 5 is not found in the array.



# Suggestions for Improvement
=============================
Display indices of occurrences

Make the array dynamic (using vector)

Add support for floating-point values

Sort the array and use binary search (for larger arrays)



# Time & Space Complexity
=========================
Operation			Complexity
Search & Count		O(n)
Space (array size)	O(n)

Where n is the number of elements in the array.



# Summary
=========
This program is a fundamental example of searching and frequency counting in an array. It's useful for:

Learning linear search

Practicing loops and conditionals

Building up to more complex array operations

Let me know if you'd like a version using vectors, recursion, or binary search instead!