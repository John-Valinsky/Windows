Linear Queue Using Array in C++

Q. Write a program to implement a Linear Queue using arrays.


What is a Linear Queue?
=======================
A Linear Queue is a First-In-First-Out (FIFO) data structure where:

The front of the queue is where deletions happen (dequeue).

The rear is where insertions happen (enqueue).

Elements are inserted at the rear and removed from the front.

Unlike circular queues, linear queues do not reuse the emptied front spaces, leading to inefficient memory use if not handled carefully.



Features in This Implementation
===============================
Fixed maximum size (MAX = 5)



Supports:
=========
enqueue(value) – Adds an element.

dequeue() – Removes the front element.

peek() – Views the front element.

display() – Prints current queue elements.



Key Functionalities
===================
Enqueue (Insert)

arr[++rear] = value;
Adds element at rear.

Sets front = 0 if queue was empty.



Dequeue (Remove)
================
for (int i = 0; i < rear; i++) {
    arr[i] = arr[i + 1];
}
rear--;
Removes element at front.

Shifts elements left to maintain continuity.

Resets front and rear if queue becomes empty.



# Check Full / Empty
====================
bool isEmpty() { return front == -1; }
bool isFull() { return rear == MAX - 1; }



# Sample Output
===============

--- Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Display Queue
5. Exit



Enter your choice: 1
Enter value to enqueue: 10
10 enqueued to queue.

Enter your choice: 1
Enter value to enqueue: 20
20 enqueued to queue.

Enter your choice: 4
Queue elements: 10 20

Enter your choice: 2
10 dequeued from queue.
