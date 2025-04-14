#include <stdio.h>
#include <stdlib.h>

#define MAXSTK 5

int TOP = -1;
int S[MAXSTK];

// Function to push an element into the stack
void push() {
    int item;
    if (TOP == MAXSTK - 1) {
        printf("\n Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter the item to push: ");
        scanf("%d", &item);
        S[++TOP] = item;
        printf(" Pushed %d onto the stack.\n", item);
    }
}

// Function to pop an element from the stack
void pop() {
    if (TOP == -1) {
        printf("\n Stack Underflow! Nothing to pop.\n");
    } else {
        int popped = S[TOP--];
        printf(" Popped element: %d\n", popped);
    }
}

// Function to display the stack
void display() {
    if (TOP == -1) {
        printf("\n Stack is empty.\n");
    } else {
        printf("\n Stack elements (top to bottom):\n");
        for (int i = TOP; i >= 0; i--) {
            printf("=> %d\n", S[i]);
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n============================\n");
        printf("      Stack Operations\n");
        printf("============================\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf(" Invalid choice! Please enter 1-4.\n");
        }
    }

    return 0;
}
