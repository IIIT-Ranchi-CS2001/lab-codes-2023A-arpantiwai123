// Insertion in linklist..insertion at beginning..By me..
#include <stdio.h>
#include<stdlib.h>
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
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second; // first and second linked..
    second->data = 12;
    second->next = third;
    // insertion at beginning
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 200;// now it become our first node..
    newnode->next = head;
    head = newnode;
    third->data = 34;
    third->next = NULL;
    linkedlistTraversal(head);
}