// Linklist traversal and creation..
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node* ptr)
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
    struct node *head, *second, *third,*fourth;
    // allocate memory for node in heap..
    head = (struct node *)malloc(sizeof(struct node)); // first node
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));// node created..
    // now linking these nodes..
    // Linking first and second node..
    head->data = 7;
    head->next = second;
    // linking second and third node..
    second->data = 11;
    second->next = third;
    // Terminate the link list at the third node
    third->data = 15;
    third->next = fourth;
    
    //linking third and fourth node..
    fourth->data = 20;
    fourth->next = NULL;
    // printing the elements of a linklist by traversing
    linkedlistTraversal(head);
}