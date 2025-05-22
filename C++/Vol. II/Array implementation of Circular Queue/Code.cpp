//Q. Array implementation of Circular Queue.


#include <iostream>
using namespace std;

#define MAX 5  // Maximum size of the circular queue

class CircularQueue {
    int arr[MAX];   // Array to hold queue elements
    int front, rear;  // Indices for the front and rear of the queue

public:
    // Constructor to initialize the queue
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear + 1) % MAX == front;
    }

    // Function to add an element to the queue (enqueue)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << value << endl;
        } else {
            if (front == -1) {
                front = 0;  // Set front to 0 when the first element is enqueued
            }
            rear = (rear + 1) % MAX;  // Circular increment of rear index
            arr[rear] = value;  // Insert the element at the rear
            cout << value << " enqueued to queue." << endl;
        }
    }

    // Function to remove an element from the queue (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No element to dequeue." << endl;
        } else {
            cout << arr[front] << " dequeued from queue." << endl;
            if (front == rear) {
                front = rear = -1;  // Reset when the queue becomes empty
            } else {
                front = (front + 1) % MAX;  // Circular increment of front index
            }
        }
    }
