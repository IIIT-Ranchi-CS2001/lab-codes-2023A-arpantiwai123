// Insertion in a doubly linked list..at end..
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
struct node *insertionatEnd(struct node* head,struct node *tail, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    tail->next = newnode;
    newnode->data = val;
    newnode->prev = tail;
    newnode->next = NULL;
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
    struct node* tail = temp;// maintaining a tail pointer..
    printf("Linkedlist before insertion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after insertion :\n");
    head = insertionatEnd(head,tail,100);
    linkedlistTraversal(head);
}