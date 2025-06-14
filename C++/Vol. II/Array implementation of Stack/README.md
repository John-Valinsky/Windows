Stack Implementation Using Array in C++

Q. Write a program to implement a Stack using arrays.



What is a Stack?
================
A Stack is a linear data structure that follows the LIFO (Last In, First Out) principle:

Elements are pushed onto the stack.

The last element pushed is the first one to be popped.



# Features of This Program
==========================
Stack of fixed size (MAX = 100)

Operations:

push(value) – Adds an element to the top.

pop() – Removes the top element.

peek() – Views the top element without removing it.

display() – Displays all elements in the stack.



# Core Concepts
===============
Push Operation

arr[++top] = value;
Increments the top index and inserts the value.


Pop Operation

cout << arr[top--] << " popped from stack.";
Removes the value from the top and decrements the index.

Peek Operation

return arr[top];
Shows the top value without removing it.



# Display
=========
Iterates from 0 to top to print all stack elements in order of insertion.



# Sample Output
===============

--- Menu ---
1. Push
2. Pop
3. Peek
4. Display Stack
5. Exit

Enter your choice: 1
Enter value to push: 10
10 pushed to stack.

Enter your choice: 1
Enter value to push: 20
20 pushed to stack.

Enter your choice: 4
Stack elements: 10 20

Enter your choice: 3
Top element is: 20

Enter your choice: 2
20 popped from stack.
