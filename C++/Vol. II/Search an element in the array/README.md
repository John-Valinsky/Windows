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

