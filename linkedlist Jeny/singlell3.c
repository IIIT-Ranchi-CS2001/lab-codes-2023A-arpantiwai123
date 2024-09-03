// singly linkedlist..insertion at end..
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
struct node* insertionatEnd(struct node* head,int val){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;// do not disturb head..
    while(temp->next!=NULL){
        temp = temp->next;
    }
    newnode->data = val;
    newnode->next = NULL;
    temp->next = newnode;
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
        printf("Do you want to continue (0,1) :\n");
        scanf("%d", &choice);
    }
    printf("Linkedlist before insertion :\n");
    linkedlistTraversal(head);
    head = insertionatEnd(head, 100);
    printf("Linkedlist after insertion :\n");
    linkedlistTraversal(head);
}