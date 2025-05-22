//Q. To implement linear linked list and perform different operation such as node insert and delete, search of an item, reverse the list.

#include <iostream>
using namespace std;

// Definition of the node structure
struct Node {
    int data;       // Data to store
    Node* next;     // Pointer to the next node

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;   // Head of the linked list

public:
    // Constructor to initialize the list
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end of the list
    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;  // If list is empty, make new node as head
            cout << value << " inserted at the end of the list." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Traverse to the last node
        }

        temp->next = newNode;  // Insert new node at the end
        cout << value << " inserted at the end of the list." << endl;
    }
