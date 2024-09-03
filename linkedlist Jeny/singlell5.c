// Deletion in singlely linkedlist..
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
struct node* deletionatFirst(struct node* head){
    struct node* temp = head;//first node
    head = head->next;
    free(temp);// free that garbage
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
  printf("Linked list before deletion :\n");
  linkedlistTraversal(head);
  printf("Linkedlist after deletion :\n");
  head = deletionatFirst(head);
  linkedlistTraversal(head);
}