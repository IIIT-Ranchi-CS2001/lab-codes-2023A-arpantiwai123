// Doubly circular linked list..Deletion..
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
struct node *deletionatPos(struct node *head, struct node *tail, int pos)
{
    struct node *temp = head;
    if (pos == 1)
    {
        tail->next = head->next;
        head->next->prev = tail;
        head = head->next;
        free(temp);
    }
    else{
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }
        struct node* ptr = temp->next;// delete krna hai..
        temp->next = ptr->next;
        ptr->next->prev = temp;
        free(ptr);
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
    printf("Linkedlist before deletion :\n");
    linkedlistTraversal(head);
    if (pos > count || pos < 1)
    {
        printf("Invalid position ");
    }
    else
    {
        printf("Linkedlist after deletion :\n");
        head = deletionatPos(head, tail, pos);
        linkedlistTraversal(head);
    }
}