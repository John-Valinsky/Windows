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

        // Function to delete a node from the list
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete!" << endl;
            return;
        }

        // If the node to be deleted is the head node
        if (head->data == value) {
            Node* temp = head;
            head = head->next;  // Move the head pointer to the next node
            delete temp;  // Free memory of the old head
            cout << value << " deleted from the list." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;  // Traverse to the node before the one to be deleted
        }

        if (temp->next == nullptr) {
            cout << "Value " << value << " not found in the list." << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;  // Bypass the node to delete
        delete nodeToDelete;  // Free memory
        cout << value << " deleted from the list." << endl;
    }

    // Function to search for an element in the list
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;  // Value found
            }
            temp = temp->next;  // Move to next node
        }
        return false;  // Value not found
    }
  // Function to reverse the linked list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;  // Save the next node
            current->next = prev;  // Reverse the link
            prev = current;        // Move prev and current one step forward
            current = next;
        }

        head = prev;  // Make the last node as the new head
        cout << "List reversed." << endl;
    }

    // Function to display the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        cout << "List elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to clean up memory
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        cout << "Memory freed." << endl;
    }
};

int main() {
    LinkedList list;
    int choice, value;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Insert at the end" << endl;
        cout << "2. Delete a node" << endl;
        cout << "3. Search for an element" << endl;
        cout << "4. Reverse the list" << endl;
        cout << "5. Display list" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertEnd(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                if (list.search(value)) {
                    cout << value << " found in the list." << endl;
                } else {
                    cout << value << " not found in the list." << endl;
                }
                break;
            case 4:
                list.reverse();
                break;
            case 5:
                list.display();
                break;
            case 6:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
