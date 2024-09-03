// Stack data structure..Implementation using arrays
#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int* arr;
};
int isEmpty(struct stack* ptr){
    if(ptr->top==-1) return 1;
    else return 0;
}

int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1) return 1;
    else return 0;
}

int main()
{
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    // Pushing an element manually
   
    // check if stack is empty..
    if(isEmpty(s)){
        printf("The stack is empty/underflow");
    }
    else{
        printf("The stack is not empty ");
    }
    return 0;
}