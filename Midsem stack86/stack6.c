// Peek operation..return the value of elements in stack
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
}; // i yahan per position hai..not index..finding relation with respect to top..(top-i+1 = index)
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow\n");
        return;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *sp, int i)
{
    int arrInd = sp->top - i + 1;
    if (arrInd < 0)
    {
        printf("Invalid position");
        return -1; // this signify invalid position
    }
    else
    {
        return sp->arr[arrInd];
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(int));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    for(int i=0;i<10;i++){
        push(s,i);// Pushing 10 values..
    }
    int x = pop(s);
    printf("Popped %d from the stack \n",x);
    int y = pop(s);
    printf("Popped %d from the stack \n",y);
    int z = pop(s);
    printf("Popped %d from the stack \n",z);
    
    // Peek operation calling
    for(int i=1;i<=s->top+1;i++){
        printf("The value at position %d is %d\n",i,peek(s,i));
    }

}