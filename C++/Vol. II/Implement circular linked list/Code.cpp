//Q. To implement circular linked list and perform different operation such as node insert and delete.

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

class CircularLinkedList {
private:
    Node* head;   // Head of the circular linked list

public:
    // Constructor to initialize the list
    CircularLinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end of the list
    void insertEnd(int value) {
        Node* newNode = new Node(value);

        // If the list is empty, the new node points to itself
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;  // Points to itself
            cout << value << " inserted at the end of the list." << endl;
            return;
        }

     // Otherwise, find the last node and insert the new node
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;  // Traverse to the last node
        }

        temp->next = newNode;  // Last node's next points to the new node
        newNode->next = head;  // New node points back to the head
        cout << value << " inserted at the end of the list." << endl;
    }

    // Function to delete a node from the list
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete!" << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head node
        if (head->data == value) {
            if (head->next == head) {  // Only one node in the list
                delete head;
                head = nullptr;
                cout << value << " deleted from the list." << endl;
                return;
            } else {
                // Find the last node to update its next pointer
                while (temp->next != head) {
                    temp = temp->next;
                }
                temp->next = head->next;  // Last node points to the new head
                Node* nodeToDelete = head;
                head = head->next;  // Move head to the next node
                delete nodeToDelete;  // Free the old head
                cout << value << " deleted from the list." << endl;
                return;
            }
        }

         // Traverse the list to find the node to delete
        while (temp->next != head && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp->data == value) {
            prev->next = temp->next;  // Bypass the node to delete
            delete temp;  // Free memory
            cout << value << " deleted from the list." << endl;
        } else {
            cout << "Value " << value << " not found in the list." << endl;
        }
    }

    // Function to display the circular linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        cout << "Circular Linked List elements: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;  // Move to next node
        } while (temp != head);  // Stop when we loop back to the head
        cout << endl;
    }
