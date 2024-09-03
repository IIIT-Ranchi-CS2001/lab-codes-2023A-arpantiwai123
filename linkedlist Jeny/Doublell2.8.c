// Deletion operation in a doubly linkedlist..at End..
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    }
    return;
}
struct node *deletionatPos(struct node *head, int pos)
{
    struct node *temp = head;
    if (pos == 1)
    {
        head->next->prev = NULL;
        head = head->next; // deletion at first ..code..
        free(temp);
    }
    else
    {
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = temp->next; // to that position
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    return head;
}
int main()
{
    head = 0;
    struct node *temp;
    int choice;
    int count = 0;
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
        printf("Enter the choice (0,1) :");
        scanf("%d", &choice);
    }
    int pos;
    printf("Enter the position :");
    scanf("%d", &pos);
    printf("Linkedlist before deletion :\n");
    linkedlistTraversal(head);
    if (pos > count || pos < 1) // pos start from 1
    {
        printf("Invalid position\n");
    }
    else
    {
        printf("Linkedlist after deletion :\n");
        head = deletionatPos(head, pos);
        linkedlistTraversal(head);
    }
}