// Insertion in a doubly linked list..at First..
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
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
struct node *head; // Globally declared..
struct node *insertionatFirst(struct node* head, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = head;
    head->prev = newnode;
    newnode->data = val;
    newnode->prev = NULL;
    head = newnode;
    return head;
}
int main()
{
    head = 0;
    int choice;
    struct node *temp;
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
        printf("Enter the choice (0,1):");
        scanf("%d", &choice);
    }
    printf("Linkedlist before insertion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after insertion :\n");
    head = insertionatFirst(head,100);
    linkedlistTraversal(head);
}