GCD and LCM Calculator using Euclidean Algorithm

# Program Title
===============
Find GCD (Greatest Common Divisor) and LCM (Least Common Multiple)



# Description
=============
This C++ program calculates the GCD and LCM of two integers entered by the user using:

Euclidean Algorithm for GCD

Mathematical formula for LCM based on GCD



# Key Features
==============
Efficiently calculates GCD using the Euclidean method.

Computes LCM using the formula:

LCM(a,b)= 
GCD(a,b)
a×b

Accepts user input and handles both small and large integers.



# Concepts Used
===============
Concept	Description
Functions	Two separate functions are used for GCD and LCM.
Euclidean Algorithm	Used for efficient GCD calculation.
Modulus Operator (%)	Used to perform the remainder operation.



# Function Definitions
======================
int findGCD(int a, int b)
Uses a loop and modulo operator to find the greatest common divisor.

int findLCM(int a, int b)
Calls findGCD() internally and calculates LCM using the formula.



# Sample Output
===============
Enter two numbers: 12 18
GCD of 12 and 18 is: 6
LCM of 12 and 18 is: 36
