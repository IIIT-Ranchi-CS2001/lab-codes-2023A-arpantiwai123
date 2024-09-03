#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
  struct node* temp = ptr;
  do{
    printf("Element :%d\n",temp->data);
    temp = temp->next;
  }while(temp!=ptr);
  return;
}

int main()
{
  struct node *head, *temp;
  head = 0;
  int choice;
  printf("Enter the number of node you want to make :");
  scanf("%d", &choice);
  while (choice--)
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
    temp->next = head;
  }
  linkedlistTraversal(head);
}