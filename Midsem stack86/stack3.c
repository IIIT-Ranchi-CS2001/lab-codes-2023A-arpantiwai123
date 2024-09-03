// Push operation..
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack* sp){
    if(sp->top==sp->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    struct stack* st;
    st->size = 80;
    st->top = -1;
    st->arr = (int*)malloc(st->size*sizeof(int));
    // Push operation..
    if(isFull(st)){
        printf("The stack is full/overflow");
    }
    else{
        st->top++;// position
        st->arr[st->top] = 10;// push successfull
    }
    printf("%d",st->arr[st->top]);
}