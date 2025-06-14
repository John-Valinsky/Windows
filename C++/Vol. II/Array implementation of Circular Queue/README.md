Circular Queue Using Array in C++

Q. Write a program to implement a Circular Queue using arrays.

Concept: Circular Queue
=======================
A Circular Queue is a linear data structure that follows the FIFO (First In First Out) principle, but the last position is connected back to the first position to make a circle. It's more efficient than a linear queue in utilizing memory.

Front points to the first element.

Rear points to the last element.

When either end reaches the maximum index, it wraps around using modulus %.
