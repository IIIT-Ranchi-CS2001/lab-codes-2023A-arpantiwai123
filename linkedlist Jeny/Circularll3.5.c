// Circular linkedlist..Deletion at First..
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
struct node* deletionatFirst(struct node* head,struct node* tail){
    struct node* temp = head;
    tail->next = temp->next;
    head = head->next;
    free(temp);
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
    struct node* tail = temp;
    printf("Linkedlist before deletion :\n");
    CircularlinkedlistTraversal(head);
    printf("Linkedlist after deletion :\n");
    head = deletionatFirst(head,tail);
    CircularlinkedlistTraversal(head);
}