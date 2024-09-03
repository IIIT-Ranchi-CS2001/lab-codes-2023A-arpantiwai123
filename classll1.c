//WAP to create a linkedlist as follows..create an empty linkedlist..
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void linkedlistTraversal(struct node* ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr = ptr->next;
    }
    return;
}
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    return 0;
}