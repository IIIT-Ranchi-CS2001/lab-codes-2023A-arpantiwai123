// Doubly circular linked list..Deletion at first..
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
struct node* deletionatFirst(struct node* head,struct node* tail){
    struct node* temp = head;
    tail->next = head->next;
    head->next->prev = tail;
    head = head->next;
    free(temp);
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
    printf("Linkedlist before deletion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after deletion :\n");
    head = deletionatFirst(head,tail);
    linkedlistTraversal(head);
}