// WAP to create a linkedlist as follows..Deletion  ..
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
struct node *deletionatFirst(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
struct node* deletionatEnd(struct node* head){
    struct node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    struct node* ptr = temp->next;
    temp->next = NULL;
    free(ptr);
    return head;
}
struct node* deletionatPos(struct node* head,int pos){
    struct node* temp = head;
   if(pos==1){
     head = head->next;
    free(temp);
   }
   else{
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
        struct node* ptr = temp->next;
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
    int pos;
    printf("Enter the position :");
    scanf("%d",&pos);
    printf("Linkedlist before deletion :\n");
    linkedlistTraversal(head);
    printf("Linkedlist after deletion :\n");
    head = deletionatFirst(head);
    linkedlistTraversal(head);
    // deletion at end..
    printf("linkedlist after deletion at End :\n");
    head = deletionatEnd(head);
     linkedlistTraversal(head);
     // deletion at position..
    if(pos>count || pos<1){
        printf("Invalid position");
    }
    else{
        printf("linkedlist after deletion at position :\n");
    head = deletionatPos(head,pos);
     linkedlistTraversal(head);
    }
}