#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
        return 1;
    else
        return 0;
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->top = ptr->top + 1;
        ptr->arr[ptr->top] = val;
    }
    return;
}
int pop(struct stack *ptr)
{
    int a = -1;
    if (isEmpty(ptr))
    {
        printf("Stack underflow\n");
    }
    else
    {
        a = ptr->arr[ptr->top];
        ptr->top--;
    }
    return a;
}
int peek(struct stack* ptr,int i){
    int arrIndx = ptr->top-i+1;
    if(arrIndx<0){
        printf("Invalid position\n");
    }
    else{
        return ptr->arr[arrIndx];
    }
}
int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    // Push operation..
    for (int i = 0; i < 10; i++)
    {
        push(s, i);
    }
    // Pop operation..
    int x = pop(s);
    int y = pop(s);
    int z = pop(s);
    printf("%d is poped from the stack \n", x);
    printf("%d is poped from the stack \n", y);
    printf("%d is poped from the stack \n", z);
    // Peek operation..
    for(int i=1;i<=s->top+1;i++){
        printf("The value at %d is %d\n",i,peek(s,i));
    }
}