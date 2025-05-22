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
