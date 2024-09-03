// Deletion at end..
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
struct node* deletionatEnd(struct node* head){
    struct node* temp = head;
    while(temp->next->next!=NULL){// last second position
        temp = temp->next;
    }
    struct node* ptr = temp->next;
    temp->next = NULL;
    free(ptr);
    return head;
}
int main()
{
    struct node *head, *temp; // this is not a node just a pointer only
    head = 0;                 // initially head is 0..
    int choice;
    while (choice)
    {
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
    printf("Linked list before deletion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after deletion :\n");
    head = deletionatEnd(head);
    linkedlistTraversal(head);
}