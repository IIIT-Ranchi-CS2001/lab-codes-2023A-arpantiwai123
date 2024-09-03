// Code to reverse a doubly linked list..
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head; // globally declared..
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    }
    return;
}
void reversedoublylinkedlist(struct node *head, struct node *tail)
{
    struct node *current;
    struct node *nextnode;
    if (head == NULL)
    {
        printf("List is empty and we cant reverse it");
    }
    else
    {
        current = head;
        while (current != NULL)
        {
            nextnode = current->next;
            // now swapping values
            current->next = current->prev;
            current->prev = nextnode;
            current = nextnode;
        }
        // swapping the head and tail..
        current = head;
        head = tail;
        tail = current;
    }
    linkedlistTraversal(head);
    return;
}
int main()
{
    head = 0;
    struct node *temp;
    int choice;
    while (choice)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of newnode :");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Enter the choice (0,1) :");
        scanf("%d", &choice);
    }
    struct node *tail = temp; // maintaining a tail pointer
    printf("Linkedlist before reversing :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after reversing :\n");
    reversedoublylinkedlist(head, tail);
}