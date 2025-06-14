Circular Queue Using Array in C++

Q. Write a program to implement a Circular Queue using arrays.

Concept: Circular Queue
=======================
A Circular Queue is a linear data structure that follows the FIFO (First In First Out) principle, but the last position is connected back to the first position to make a circle. It's more efficient than a linear queue in utilizing memory.

Front points to the first element.

Rear points to the last element.

When either end reaches the maximum index, it wraps around using modulus %.



Key Features in This Program
============================
Array size: MAX = 5

enqueue(value) – Adds an element.

dequeue() – Removes the front element.

peek() – Shows the front element.

display() – Displays all elements in the queue.



Code Overview
=============
Initialization

front = -1;
rear = -1;

Enqueue Operation

rear = (rear + 1) % MAX;
arr[rear] = value;

Dequeue Operation

front = (front + 1) % MAX;


Empty and Full Conditions
=========================
bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return (rear + 1) % MAX == front;
}



Sample Menu
===========
1. Enqueue
2. Dequeue
3. Peek
4. Display Queue
5. Exit
