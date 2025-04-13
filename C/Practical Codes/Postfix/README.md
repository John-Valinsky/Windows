# Postfix Expression Evaluator in C

This project is a simple C program to evaluate **postfix expressions** (also known as Reverse Polish Notation).  
It demonstrates the use of **stacks** and **expression parsing** through manual implementation.



# What is Postfix Notation?
---------------------------
A postfix expression is a mathematical notation in which every operator follows all of its operands.  
For example, the infix expression:

(5 + 3) * (8 - 2)

is written in postfix as:

53+82-*



# Features
----------
* Supports:
 
 1 Addition (`+`)
  2 Subtraction (`-`)
  3 Multiplication (`*`)
  4 Division (`/`)
  5 Power (`^`)

* Evaluates expressions using stack operations.
* Handles integer operands.
* Error handling for stack overflow/underflow.



# Files Included
----------------

| File Name              | Description                         |
|------------------------|-------------------------------------|
| `postfix_eval.c`       | Main source code                    |
| `README.md`            | Documentation (this file)           |



# How to Compile and Run
------------------------
* Using GCC

	gcc postfix_eval.c -o postfix_eval -lm
	./postfix_eval
	
