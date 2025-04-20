# Java Program: Multiplication Tables Generator

Overview

This Java program generates multiplication tables for numbers within a user-defined range. It uses nested loops and simple input validation to ensure correct output.



# Key Concepts
--------------
* User Input via Scanner

* Conditional Statements (if-else)

* Nested Loops (for)

* Input Validation to ensure valid range



# File Description
------------------
Tables.java

This file contains the main class Tables, which:

* Prompts the user to enter the starting and ending number for multiplication tables.

* Validates the input to ensure the start is less than the end.

* Displays multiplication tables from the start to the end number (inclusive), each up to 10 multiples.



# Sample Output
---------------
Input:

Table Range Start from: 2
Table End to: 4



Output:

Multiplicaiton table of 2 is

2*1=2
2*2=4
...
2*10=20

Multiplicaiton table of 3 is

Multiplicaiton table of 4 is



# Invalid Input Example:

Table Range Start from: 5
Table End to: 3


Output:

Multiplicaiton table not possible



# Program Logic
---------------
Accept starting (m) and ending (n) numbers from the user.

Check if m < n.

Loop through each number from m to n.

For each number, print its multiplication table from 1 to 10.



# Features
----------
Input validation prevents invalid ranges.

Clear table formatting for each number.

Easy to extend (e.g., changing the multiplication limit from 10 to any other number).