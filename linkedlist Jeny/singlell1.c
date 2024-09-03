// singly linkedlist..
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
}// Wow what a method..
int main()
{
  struct node *head, *temp; // this is not a node just a pointer only
  head = 0;                 // initially head is 0..
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
      head = temp = newnode; // now it is put in the ll..
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
  }
  linkedlistTraversal(head);
}