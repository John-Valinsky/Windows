#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Function Prototypes
void push(int element);
int pop();

int main() {
    char postfix[MAX], ch;
    int i, op1, op2, result;

    printf("\n Program to Evaluate Postfix Expression\n");
    printf("=========================================\n");

    printf(" Enter the postfix expression (e.g., 53+82-*): ");
    scanf("%s", postfix);

    for (i = 0; i < strlen(postfix); i++) {
        ch = postfix[i];

        if (isdigit(ch)) {
            push(ch - '0');  // Convert char to int
        } else {
            op2 = pop();
            op1 = pop();

            switch (ch) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
                case '^': result = (int)pow(op1, op2); break;
                default:
                    printf(" Invalid operator '%c'\n", ch);
                    return 1;
            }
            push(result);
        }
    }

    printf(" Result of the postfix expression: %d\n", pop());
    return 0;
}

// Pushes an integer onto the stack
void push(int element) {
    if (top >= MAX - 1) {
        printf(" Stack Overflow!\n");
        return;
    }
    stack[++top] = element;
}

// Pops and returns an integer from the stack
int pop() {
    if (top < 0) {
        printf(" Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}
