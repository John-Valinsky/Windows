#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the singly linked list
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to insert a node at the end
void insert(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Function to delete a node with a given value
void delete(int value) {
    struct Node *temp = head, *prev = NULL;

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

// Function to display the list
void display() {
    struct Node* temp = head;
    printf("Linked List: ");
    if (temp == NULL) {
        printf("Empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    int i, n, value;

    printf("How many elements do you want to insert? ");
    scanf("%d", &n);

    printf("Enter %d elements to insert:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        insert(value);
    }

    printf("After insertion:\n");
    display();

    printf("How many elements do you want to delete? ");
    scanf("%d", &n);

    printf("Enter %d elements to delete:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        delete(value);
    }

    printf("After deletion:\n");
    display();

    return 0;
}
