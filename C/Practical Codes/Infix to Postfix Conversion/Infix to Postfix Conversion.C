#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For isalnum()

#define MAX 100

char stack[MAX];
int top = -1;

void push(char elem) {
    if (top >= MAX - 1) {
        printf("\nStack Overflow!");
    } else {
        stack[++top] = elem;
    }
}

char pop() {
    if (top == -1) {
        printf("\nStack Underflow!");
        return '\0';
    } else {
        return stack[top--];
    }
}

int precedence(char op) {
    switch (op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        case '(': return 0;  // Lowest precedence for '('
        default : return -1;
    }
}

void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    char ch, elem;

    push('#');  // Sentinel

    while ((ch = infix[i++]) != '\0') {
        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (stack[top] != '(') {
                postfix[j++] = pop();
            }
            pop();  // Pop the '('
        } else {
            while (precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    while (stack[top] != '#') {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';  // Null terminate the postfix expression
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("\nInfix to Postfix Conversion");
    printf("\n---------------------------");
    printf("\nEnter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
