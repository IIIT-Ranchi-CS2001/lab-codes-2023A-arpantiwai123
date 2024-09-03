// Reversing a singly linkedlist..
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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
} // Method 1..
void reverselinkedlist(struct node *head)
{
    struct node *prevnode;
    struct node *currentnode;
    struct node *nextnode;
    prevnode = NULL; // as initially there is no any prv node
    currentnode = nextnode = head;
    if (head == NULL)
    {
        printf("List is empty and we cant reverse it");
    }
    else
    {
        while (nextnode != NULL)
        {
            nextnode = nextnode->next;
            currentnode->next = prevnode;
            prevnode = currentnode;
            currentnode = nextnode;
        }
        head = prevnode;
        linkedlistTraversal(head); // Yes this is tricky..
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
        printf("Do you want to continue (0,1) :\n");
        scanf("%d", &choice);
    }
    printf("Linkedlist before reversing :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after reversing :\n");
    reverselinkedlist(head);
}