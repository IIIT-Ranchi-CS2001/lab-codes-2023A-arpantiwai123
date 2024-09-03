// Deletion in Doubly linked list..
// Doubly linkedlist...
#include <stdio.h>
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
    while (ptr != NULL)
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    }
    return;
}
struct node* deletionatFirst(struct node* head){
    struct node* ptr = head;
    struct node* p = head->next;
    head = head->next;
    p->prev = NULL;
    free(ptr);
    return head;
}
struct node* deletionatEnd(struct node* head){
    struct node* ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;// last 2nd position per..
    }
    struct node* q = ptr->next;
    ptr->next = NULL;
    free(q);
    return head;
}
int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
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
    fourth->next = NULL;
    printf("Linkedlist before deletion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after deletion :\n");
    head = deletionatEnd(head); 
    linkedlistTraversal(head);
}