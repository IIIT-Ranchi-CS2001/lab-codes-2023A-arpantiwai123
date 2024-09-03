#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int* arr;
};
int isFull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack* s,int val){
    if(isFull(s)){
        printf("Stack Overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top]=val;
    }
    return;
}
int pop(struct stack* s){
    int a = -1;
    if(isEmpty(s)){
        printf("Stack underflow\n");
    }
    else{
        a = s->arr[s->top];
        s->top--;
    }
    return a;
}
int peek(struct stack* s,int i){
    int arrInd = s->top-i+1;
    if(arrInd<0){
        printf("Invalid Position\n");
        return -1;
    }
    else{
        return s->arr[arrInd];
    }
}
int main(){
    struct stack* s;
    s->size = 80;
    s->top=-1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    push(s,10);
    push(s,1);
    push(s,35);
    // Pop
    // int x = pop(s);
    // int y = pop(s);
    // printf("%d is popped from the stack\n",x);
    // printf("%d is popped from the stack\n",y);
    // Peek operation..
    for(int i=1;i<=s->top+1;i++){
        printf("Element is %d at %d\n",peek(s,i),i);
    }
}