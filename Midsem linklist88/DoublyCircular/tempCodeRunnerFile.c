// Doubly Circular linkedlist..
#include <stdio.h>// and further operation will remain have same logic..
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void linkedlistTraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    return;
}
struct node* insertionFirst(struct node* head,int val){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head->next;
    ptr->next = val;
    while(p->next!=head){
        p=p->next  ;
    }
    ptr->prev = p;
    p->next = ptr;
    ptr->next = head;
    head->prev = ptr;
    head = head->prev;
    return head;

    
}
int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->prev = fourth;
    head->data = 10;
    head->next = second;
    second->prev = head;
    second->data = 20;
    second->next = third;
    third->prev = second;
    third->data = 30;
    third->next = fourth;
    fourth->prev = third;
    fourth->data = 40;
    fourth->next = head;
    head = insertionFirst(head,68);
    linkedlistTraversal(head);
}