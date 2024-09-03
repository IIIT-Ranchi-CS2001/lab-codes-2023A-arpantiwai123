// Circular linkedlist..Reversing it..
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
void reversingCircularlinkedlist(struct node *head, struct node *tail)
{
    struct node *prev;
    struct node *current;
    struct node *nextnode;
    current = tail->next;
    nextnode = current->next;
    if (tail == 0)
    {
        printf("List is empty");
    }
    else
    {
        while (current != tail)
        {
            prev = current;
            current = nextnode;
            nextnode = current->next;
            current->next = prev;
        }
        nextnode->next = tail;
        head = tail;
        tail = nextnode;
        CircularlinkedlistTraversal(head);
    }
    return;
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
    struct node *tail = temp;
    printf("Linkedlist before reversing :\n");
    CircularlinkedlistTraversal(head);
    printf("Linkedlist after reversing :\n");
    reversingCircularlinkedlist(head, tail);
}