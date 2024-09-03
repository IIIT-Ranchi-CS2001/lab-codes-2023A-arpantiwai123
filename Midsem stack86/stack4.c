// Pop operation..
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* sp){
    if(sp->top==-1){
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
    
    //Pop operation..
    if(isEmpty(st)){
        printf("The stack is empty");
        return -1;
    }
    else{
        int val = st->arr[st->top];// firstly store it for return
        st->top = st->top-1;// then pop it
        return val;
    }
}