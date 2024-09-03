// Insertion in doubly circular ll..at Specific position....
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
struct node *insertionatPos(struct node *head, struct node *tail, int val, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node* temp = head;
    newnode->data = val;
    if (pos == 1)
    {
        newnode->next = head;
        newnode->prev = tail;
        tail->next = newnode;
        head->prev = newnode;
        head = newnode; // now this is first node..
    }
    else{
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
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
    int count = 0;
    struct node *head, *tail;
    head = 0;
    int choice;
    while (choice)
    {
        count++;
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
    int pos;
    printf("Enter the position :");
    scanf("%d", &pos);
    printf("Dcircularlinkedlist before insertion :\n");
    linkedlistTraversal(head);
    if (pos > count || pos < 1)
    {
        printf("Invalid position ");
    }
    else
    {
        printf("Dcircularlinkedlist after insertion :\n");
        head = insertionatPos(head, tail, 100, pos);
        linkedlistTraversal(head);
    }
}