C++ Program: Reverse a Number

# Question
==========
Write a program to find the reverse of an integer number.



# Concepts Used
===============
Concept	Description
Modulus (%)	Extracts the last digit of the number
Integer Division ( / )	Removes the last digit from the number
While Loop	Iteratively builds the reversed number by extracting digits



# Example Input & Output
========================
Input:

Enter an integer: 12345

Output:

Reverse of 12345 is: 54321



# Code Explanation
==================
while (num != 0) {
    int digit = num % 10;             // Extract the last digit
    reversed = reversed * 10 + digit; // Append it to the reversed number
    num = num / 10;                   // Remove the last digit
}



Step-by-step (Input: 123):

digit = 3, reversed = 3

digit = 2, reversed = 3 * 10 + 2 = 32

digit = 1, reversed = 32 * 10 + 1 = 321