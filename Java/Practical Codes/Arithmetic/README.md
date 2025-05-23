# Arithmetic Operators Demonstration – Java Program

Description

This simple Java program demonstrates the usage and behavior of arithmetic operators in Java. It evaluates a series of expressions using fixed integer values and prints the result of each. It highlights operator precedence and associativity.



# Features
----------
* Demonstrates basic arithmetic operations: +, -, *, /, %

* Shows how operator precedence affects evaluation

* Includes both default and overridden precedence examples using parentheses



# Operations Performed
----------------------
Given the values:

int a = 5, b = 6, c = 3, d = 4, e = 2;
The program evaluates the following expressions:

m = a + b - c

n = a + b - c * d

o = a + b - c * d + d

p = a + b - c * d + d / a

k = a + b - c * d + d / a % b

l = (a + b - c) * (d + d) / a % b



# Output Format
---------------
arthmetic operators deministration
m=8
n=-1
o=3
p=3
default precedence and associativity k=3
overriden precedence and associativity l=1



# How to Run
------------
Save the code as Arithmetic.java

Compile the code:

	javac Arithmetic.java
	
	Run the program:
	java Arithmetic



# Concepts Covered
------------------
* Arithmetic operators

* Operator precedence and associativity

* Java syntax for variable declarations and expressions
