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
struct node* deletionatEnd(struct node* head,struct node* tail){
    tail->prev->next = NULL;
    free(tail);
    return head;
}
int main()
{
    head = 0;
    struct node *temp;
    int choice;
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
        printf("Enter the choice (0,1) :");
        scanf("%d", &choice);
    }
    struct node* tail = temp;// maintaining a tail pointer..
    printf("Linkedlist before deletion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after deletion :\n");
    head = deletionatEnd(head,tail);
    linkedlistTraversal(head);
}