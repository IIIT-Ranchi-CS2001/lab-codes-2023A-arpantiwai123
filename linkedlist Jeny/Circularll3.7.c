// Circular linkedlist..Deletion at specific position..
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
struct node *deletionatPos(struct node *head, struct node *tail, int pos)
{
    struct node *temp = head;
    if (pos == 1)
    {
        tail->next = temp->next;
        head = head->next;
        free(temp); // deletion at first
    }
    else{
        for(int i=1;i<pos-1;i++){
            temp = temp->next;// before that position..
        }
        struct node* ptr = temp->next;// delete krna hai..
        temp->next = ptr->next;
        free(ptr);
    }
    return head;
}
int main()
{
    int count = 0;
    struct node *head, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        count++;
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
    int pos;
    printf("Enter the position :");
    scanf("%d", &pos);
    struct node *tail = temp;
    printf("Linkedlist before deletion :\n");
    CircularlinkedlistTraversal(head);
    if (pos > count || pos < 1)
    {
        printf("Invalid position ");
    }
    else
    {
        printf("Linkedlist after deletion :\n");
        head = deletionatPos(head, tail, pos);
        CircularlinkedlistTraversal(head);
    }
}