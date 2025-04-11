# Infix to Postfix Expression Converter (C Language)

This project is a simple C program that converts an **infix expression** (like `x^y/(5*2)+2`) into a **postfix expression** (also known as Reverse Polish Notation). It uses stack-based logic to apply operator precedence rules correctly.


# Features
----------
* Converts infix expressions with `+`, `-`, `*`, `/`, `^`, and parentheses
* Handles alphanumeric operands
* Follows proper operator precedence and associativity
* Easy-to-understand C implementation with comments
* Lightweight and CLI-based (no extra libraries needed)


# Requirements
--------------
* C compiler (e.g., `gcc`, `tcc`, `clang`)
* Command-line terminal or IDE that supports C


# Compilation
-------------
* gcc infix_to_postfix.c -o infix_to_postfix
* Run the Program
* ./infix_to_postfix


# Usage
-------
When prompted, enter a valid infix expression without spaces.

Example:
--------
Enter an infix expression: x^y/(5*2)+2
Postfix Expression: xy^52*/2+


# Explanation
-------------
What is an Infix Expression?

Infix expressions are the usual way we write expressions in math, e.g., A + B.


What is a Postfix Expression?

Postfix (Reverse Polish Notation) means writing the operator after its operands. For example, A B +.

Conversion Logic

Use a stack to temporarily hold operators.


# Maintain operator precedence
------------------------------
^ (highest)

*, /

+, - (lowest)

Handle ( and ) to control precedence grouping.


# File Structure
----------------
.
├── infix_to_postfix.c      # Main source code file
├── README.md               # Project documentation

