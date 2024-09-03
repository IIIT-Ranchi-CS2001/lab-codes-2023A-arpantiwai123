// Insertion in doubly circular ll..at End..
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
    struct node *temp = head;
    do
    {
        printf("Element :%d\n", temp->data);
        temp = temp->next;
    } while (temp != head);
}
struct node *insertionatEnd(struct node *head, struct node *tail, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = tail->next;
    tail->next->prev = newnode;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    return head;
}
int main()
{
    struct node *head, *tail;
    head = 0;
    int choice;
    while (choice)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of new node :");
        scanf("%d", &newnode->data);
        if (head == NULL)
        {
            head = tail = newnode; // single node hai abhi..
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
        printf("Enter the choice (0,1):");
        scanf("%d", &choice);
    }
    printf("Dcircularlinkedlist before insertion :\n");
    linkedlistTraversal(head);
    printf("Dcircularlinkedlist after insertion :\n");
    head = insertionatEnd(head, tail, 100);
    linkedlistTraversal(head);
}