// WAP to create a linkedlist as follows..Insertion.at beginning and updation also..
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
struct node *insertionatFirst(struct node *head, int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    return head;
}
void updationval(struct node* ptr,int prev,int num){
    while(ptr->data!=prev){
        ptr = ptr->next;
    }
    ptr->data = num;
    return;
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
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter the choice :");
        scanf("%d", &choice);
    }
    int val;
    printf("Enter the value you want to insert :");
    scanf("%d", &val);
    printf("Linkedlist before insertion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after insertion :\n");
    head = insertionatFirst(head, val);
    linkedlistTraversal(head);
    // Updation..
    int prev,num;
    printf("Enter the values :");
    scanf("%d %d",&prev,&num);
    updationval(head,prev,num);
    printf("Linkedlist after updation :\n");
    linkedlistTraversal(head);
}