// Circular linkedlist..Insertion at beginning
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
struct node *insertionatFirst(struct node *head, struct node *tail, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = tail->next;
    tail->next = newnode;
    head = newnode;
    return head;
}
int main()
{
    struct node *head, *temp;
    head = 0;
    int choice;
    while (choice)
    {
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
    struct node *tail = temp; // last node ko point krega..
    printf("Cicularlinkedlist before insertion :\n");
    CircularlinkedlistTraversal(head);
    printf("Cicularlinkedlist after insertion :\n");
    head = insertionatFirst(head, tail, 100);
    CircularlinkedlistTraversal(head);
}