C++ Program: Prime Number Checker

# Question
==========
Write a program to check whether a number is prime or not.



# Concepts Covered
==================
Concept	Description
Prime Number	A number that has only two factors: 1 and itself (e.g., 2, 3, 5, 7, 11).
Boolean Flag	Used to indicate whether a number is prime (true) or not (false).
Loop & Modulo	% operator checks if a number is divisible by another.



# Logic Explanation
===================
Input a positive number.

Check if the number is ≤ 1 → Not Prime.

Loop from 2 to num/2:

If num % i == 0, then the number is divisible → Not Prime.

If no such divisor is found → It's a Prime number.



# Example Runs
==============
Input:

Enter a positive number: 7


Output:

7 is a prime number.


Input:

Enter a positive number: 12


Output:

12 is not a prime number.
