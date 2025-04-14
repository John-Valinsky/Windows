# Stack Operations in C (Push & Pop)
------------------------------------
This project implements basic Stack operations in C using a fixed-size array. The program demonstrates pushing the values 5, 9, 34, 17, 32 onto the stack and then popping 3 elements from it.



# Features
----------
* Push operation

* Pop operation

* Display the current stack

* Error handling for Overflow and Underflow



# Sample Output
---------------
* Inserting elements into stack: 5, 9, 34, 17, 32
	
Pushed: 5
Pushed: 9
Pushed: 34
Pushed: 17
Pushed: 32

* Popping 3 elements from stack:

Popped: 32
Popped: 17
Popped: 34



# Stack after pop operations
----------------------------
Stack elements (top to bottom):
=> 9
=> 5



# How to Run
------------
* Save the code to a file, e.g., stack.c

* Open a terminal and compile:

	gcc stack.c -o stack
	
	Run the executable:
	./stack



# Functions Used
----------------
* Function	Purpose
* push(int item)	Adds an item to the top of the stack
* pop()	Removes the top item from the stack
* display()	Displays all stack elements from top to bottom

