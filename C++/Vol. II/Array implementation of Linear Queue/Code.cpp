//Q. Array implementation of Linear Queue.

#include <iostream>
using namespace std;

#define MAX 5  // Maximum size of the queue

class Queue {
    int arr[MAX];  // Array to hold queue elements
    int front, rear;  // Indices for the front and rear of the queue


