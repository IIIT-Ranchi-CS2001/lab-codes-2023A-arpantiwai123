// Insertion after a node i.e a pointer is given after that node insert....
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    }
    return;
}
struct node *insertatFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}
struct node *insertatIndex(struct node *head, int data, int index) // insertion in between
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head; // head ko store kr liya
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertatEnd(struct node *head,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while(p->next!=NULL){
        p = p->next;
        i++;
    }
    ptr->data = data;
    p->next  = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertAfternode(struct node *head,struct node *prevNode,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;
    printf("Linklist before insertion :\n");
    linkedlistTraversal(head);
    printf("Linklist after insertion :\n");
    // Insertion after a node..completed..
    head = insertAfternode(head,second,45); // Yes..
    head = insertAfternode(head,third,82); 
    linkedlistTraversal(head);
    return 0;
}