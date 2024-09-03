// Circular linkedlist..Insertion at specific position
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void CircularlinkedlistTraversal(struct node *head)
{
    if (head == NULL)
    {
        printf("Linkedlist is empty");
    }
    else
    {
        struct node *ptr = head;
        do
        {
            printf("Element :%d\n", ptr->data);
            ptr = ptr->next;
        } while (ptr != head); // very good..
    }
    return;
}
struct node *insertionatPos(struct node *head, struct node *tail, int val, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    struct node *temp = head;
    if (pos == 1)
    {
        newnode->next = tail->next;
        tail->next = newnode; // insertion at first..
        head = newnode;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode; 
    }
    return head;
}
int main()
{
    int count = 0;
    struct node *head, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        count++;
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of newnode :");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head; // circular..
        printf("Do you want to continue (0,1) :\n");
        scanf("%d", &choice);
    }
    int pos;
    printf("Enter the position :");
    scanf("%d", &pos);
    struct node *tail = temp; // last node ko point krega..
    printf("Cicularlinkedlist before insertion :\n");
    CircularlinkedlistTraversal(head);
    if (pos > count || pos < 1)
    {
        printf("Invalid position");
    }
    else
    {
        printf("Cicularlinkedlist after insertion :\n");
        head = insertionatPos(head, tail, 100, pos);
        CircularlinkedlistTraversal(head);
    }
}