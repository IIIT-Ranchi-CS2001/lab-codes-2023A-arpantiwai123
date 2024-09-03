// Doubly linkedlist..Insertion..
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
struct node *insertionatFirst(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    ptr->prev = NULL;
    ptr->data = val;
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
    return head;
}
struct node *insertionatEnd(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while(p->next!=NULL){
        p = p->next;
        i++;
    }
    ptr->data = val;
    ptr->next = NULL;
    ptr->prev = p;
    p->next = ptr;
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
    printf("Linkedlist before insertion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after insertion :\n");
    head = insertionatEnd(head, 120);
    linkedlistTraversal(head);
}