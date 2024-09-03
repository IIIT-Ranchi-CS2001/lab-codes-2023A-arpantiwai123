// Insertion in a doubly linked list..at specific position..
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
struct node *insertionatPos(struct node *head, int val, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    struct node *temp = head;
    if (pos == 1)
    {// as the below code was not true for pos = 1 so we add it..
        newnode->next = temp;
        temp->prev = newnode;
        newnode->prev = NULL;
        head = newnode;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next; // before that position..
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        newnode->prev = temp;
        temp->next = newnode;
    }
    return head;
}
int main()
{
    head = 0;
    int count = 0;
    int choice;
    struct node *temp;
    while (choice)
    {
        count++;
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
    int pos;
    printf("Enter the position :");
    scanf("%d", &pos);
    printf("Linkedlist before insertion :\n");
    linkedlistTraversal(head);
    if (pos > count || pos < 1)// pos start from 1
    {
        printf("Invalid position\n");
    }
    else
    {
        printf("Linkedlist after insertion :\n");
        head = insertionatPos(head, 100, pos);
        linkedlistTraversal(head);
    }
}