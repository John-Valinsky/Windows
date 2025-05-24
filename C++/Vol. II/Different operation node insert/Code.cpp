//Q. To implement double linked list and perform different operation such as node insert and delete.

#include <iostream>
using namespace std;

// Definition of the node structure
struct Node {
    int data;       // Data to store
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
