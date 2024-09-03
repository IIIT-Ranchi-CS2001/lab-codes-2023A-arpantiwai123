// Code implementation by Harry
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
 // Push operation..sbse pehle check if stack is full
void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack overflow\n");
        return;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
// Pop operation.. Before that we check if stack is empty..
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow\n");
        return -1;
    }
    else{
       int val = ptr->arr[ptr->top];
       ptr->top--;
       return val;
    }
}
int main(){
    struct stack *s = (struct stack*)malloc(sizeof(int));
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    printf("Stack has been created successfully\n");
    printf("Before push :%d\n",isFull(s));//0
    printf("Before push :%d\n",isEmpty(s));//1
    // calling push
    for(int i=0;i<10;i++){
        push(s,i);// Pushing 10 values..
    }
    printf("After push :%d\n",isFull(s));//0
    printf("After push :%d\n",isEmpty(s));//0

    int x = pop(s);
    printf("Popped %d from the stack \n",x);
    int y = pop(s);
    printf("Popped %d from the stack \n",y);
}