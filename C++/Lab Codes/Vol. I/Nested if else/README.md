Find the Greatest Among Three Numbers

# Program Title
===============
Greatest of Three Numbers using Nested if...else in C++



# Description
=============
This C++ program takes three integer inputs from the user and determines which number is the greatest using nested if...else conditions.



# Key Concepts
==============
Concept	Description
cin & cout	For user input and output display.
if...else	Used to make logical decisions based on conditions.
Nested if...else	Allows comparing values in steps for complex logic.



# What This Demonstrates
========================
How to use nested conditional logic.

Comparing multiple values using relational operators (>=, >).

Handling multiple decision paths.



# Sample Output
===============
Example 1:

Enter three numbers: 42 17 88
The greatest number is: 88
Example 2:

Enter three numbers: 15 30 30
The greatest number is: 30



# Logic Explanation
===================
if (num1 >= num2) {
    if (num1 >= num3) {
        // num1 is greatest
    } else {
        // num3 is greatest
    }
} else {
    if (num2 >= num3) {
        // num2 is greatest
    } else {
        // num3 is greatest
    }
}


First, it checks if num1 is greater than or equal to num2.

If true, it then checks num1 with num3.

If false, it moves to compare num2 with num3.