// Infix to postfix
#include<stdio.h>
#include<ctype.h>

char stack[50];
int top = -1;

void push(char x) {
    top++;
    stack[top] = x;
}

char pop() {
    if (top == -1) {
        return -1;
    } else {
        return stack[top--];
    }
}

int priority(char x) {
    if (x == '(') {
        return 0;
    }
    if (x == '+' || x == '-') {
        return 1;
    }
    if (x == '*' || x == '/') {
        return 2;
    }
    if(x == '^'){
        return 3;
    }
    return -1; 
}

int main() {
    char exp[50];
    printf("Enter the expression: ");
    scanf("%s", exp);
    char *e = exp;
    printf("Postfix Expression: ");
    while (*e != '\0') {
        if (isdigit(*e) || isalpha(*e)) {
            printf("%c", *e);
        } else if (*e == '(') {
            push(*e);
        } else if (*e == ')') {
            while (stack[top] != '(') {
                printf("%c", pop());
            }
            pop(); 
        } else { 
            while (top != -1 && priority(stack[top]) >= priority(*e)) {
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");
    return 0;
}