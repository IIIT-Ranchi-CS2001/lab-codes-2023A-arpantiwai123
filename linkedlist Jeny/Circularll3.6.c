// Circular linkedlist..Deletion at End..
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
struct node* deletionatEnd(struct node* head,struct node* tail){
    struct node* temp = head;
    do{
        temp = temp->next;
    }while(temp->next!=tail);
    struct node* ptr = tail;// delete krna hai..
    temp->next = tail->next;
    tail = temp;
    free(ptr);
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
    head = deletionatEnd(head,tail);
    CircularlinkedlistTraversal(head);
}