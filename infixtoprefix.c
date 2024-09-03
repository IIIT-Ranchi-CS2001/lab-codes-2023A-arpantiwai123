// Infix to Prefix
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char item) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int isOperator(char symbol) {
    return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^');
}

int precedence(char symbol) {
    switch (symbol) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infixToPrefix(char infix[], char prefix[]) {
    int i, j = 0;
    int len = strlen(infix);

    for (i = len - 1; i >= 0; i--) {
        if (isspace(infix[i]))
            continue;
        if (isalnum(infix[i])) {
            prefix[j++] = infix[i];
        } else if (infix[i] == ')') {
            push(infix[i]);
        } else if (infix[i] == '(') {
            while (top != -1 && stack[top] != ')') {
                prefix[j++] = pop();
            }
            if (top != -1) {
                pop();
            }
        } else if (isOperator(infix[i])) {
            while (top != -1 && precedence(stack[top]) > precedence(infix[i])) {
                prefix[j++] = pop();
            }
            push(infix[i]);
        }
    }

    while (top != -1) {
        prefix[j++] = pop();
    }
    prefix[j] = '\0';
    len = strlen(prefix);
    for (i = 0; i < len / 2; i++) {
        char temp = prefix[i];
        prefix[i] = prefix[len - i - 1];
        prefix[len - i - 1] = temp;
    }
}

int main() {
    char infix[MAX], prefix[MAX];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);

    return 0;
}