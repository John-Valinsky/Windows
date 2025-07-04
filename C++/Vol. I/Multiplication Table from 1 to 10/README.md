Multiplication Table Generator in C++

# Program Title
===============
Print Multiplication Tables from 1 to 10



# Description
=============
This program prints the multiplication tables for numbers 1 through 10 using nested loops. Each table lists the product of the current number with values from 1 to 10.



# Key Concepts
==============
Concept	Description
Nested for loops	An outer loop selects the base number; the inner loop performs multiplication.
Formatted Output	Each multiplication step is printed in a user-readable format.



# What This Demonstrates
========================
Use of looping structures in C++.

Proper formatting of output for readability.

Understanding of nested iteration to generate structured output.



# Sample Output
===============

Multiplication Table of 1:
1 x 1 = 1
1 x 2 = 2
...
1 x 10 = 10
--------------------------
Multiplication Table of 2:
2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
--------------------------
...
Multiplication Table of 10:
10 x 1 = 10
...
10 x 10 = 100
--------------------------



# How the Code Works
====================
for (int i = 1; i <= 10; ++i) {        // Outer loop for base number
    for (int j = 1; j <= 10; ++j) {    // Inner loop for multiplication
        cout << i << " x " << j << " = " << i * j << endl;
    }
    cout << "--------------------------" << endl; // Separator line
}