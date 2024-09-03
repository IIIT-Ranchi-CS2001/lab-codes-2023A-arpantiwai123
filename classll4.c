// WAP to create a linkedlist as follows..Duplicate check.
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
void duplicate(struct node* head){
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i]=0;
    }
    struct node* temp = head;
    while(temp!=NULL){
        arr[temp->data]++;
        temp = temp->next;
    }
    for(int i=0;i<100;i++){
        if(arr[i]>1){
            printf("Duplicate element is %d ->%d\n",i,arr[i]);
        }
    }
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
   duplicate(head);
}