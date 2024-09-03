// Deletion from specified position..
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
struct node *deletionatPos(struct node *head, int pos)
{
    struct node *temp = head;
    struct node *ptr;
    for (int i = 1; i < pos; i++)
    {
        ptr = temp;// before that position..
        temp = temp->next;// at that position..
    }
    ptr->next = temp->next;
    free(temp);
    return head;
}
int main()
{
    struct node *head, *temp; // this is not a node just a pointer only
    head = 0;                 // initially head is 0..
    int choice;
    int count = 0;
    while (choice)
    {
        count++;
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of newnode :");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == 0)
        {
            head = temp = newnode; // now it is put in the ll..
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
    printf("Linked list before deletion :\n");
    linkedlistTraversal(head);
    if (pos > count)
    {
        printf("Invalid position");
    }
    else
    {
        printf("Linkedlist after deletion :\n");
        head = deletionatPos(head, pos);
        linkedlistTraversal(head);
    }
}