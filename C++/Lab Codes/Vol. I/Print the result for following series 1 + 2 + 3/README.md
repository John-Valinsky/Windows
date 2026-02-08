C++ Program: Sum of Factorial Series (1! + 2! + 3! + … + n!)

# Question
==========
Write a program to print the result of the following series:

1!+2!+3!+...+n!



# Concepts Used
===============
Concept	Description

Factorial	

n!=n×(n−1)×...×1
Looping	Used to iterate from 1 to n and calculate factorial of each term
Function	factorial(int num) helps modularize the logic



# Example Input & Output
========================
Input:
Enter the value of n: 5

Output:
Sum of series 1! + 2! + 3! + ... + 5! is: 153



# Explanation
=============
1!=1,2!=2,3!=6,4!=24,5!=120
1+2+6+24+120=153



# Code Highlights
=================
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

This function calculates the factorial of a given number num.

for (int i = 1; i <= n; ++i) {
    sum += factorial(i);
}
Loops from 1 to n, adds each i! to the sum.


