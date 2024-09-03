// singly linkedlist..Insertion after a given location..
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
}
struct node *insertionAfterlocation(struct node *head, int val, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    for (int i = 1; i <= pos - 1; i++)// also use while loop..
    {
        temp = temp->next;//reach to that position..
    }
    newnode->data = val;
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
int main()
{
    struct node *head, *temp;
    head = 0;
    int count = 0;
    int choice;
    while (choice)
    {
        count++; // Tells no of nodes..
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
    int pos;
    printf("Enter the position :");
    scanf("%d", &pos);
    printf("Linkedlist before insertion :\n");
    linkedlistTraversal(head);
    if (pos > count)// important condition..
    {
        printf("Invalid position");
    }
    else
    {
        head = insertionAfterlocation(head, 100, pos);
        printf("Linkedlist after insertion :\n");
        linkedlistTraversal(head);
    }
}