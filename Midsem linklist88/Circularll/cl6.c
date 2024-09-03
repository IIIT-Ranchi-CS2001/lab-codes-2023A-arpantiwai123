// Deletion operation in Circular linkedlist..
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Element :%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct node *deletionatFirst(struct node *head)
{
    struct node* p = head;
    struct node *ptr = head->next;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = head->next;
    head = head->next;
    free(p);
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));
    printf("Enter the head data :");
    scanf("%d", &head->data);
    head->next = second;
    printf("Enter the data of second :");
    scanf("%d", &second->data);
    second->next = third;
    printf("Enter the data of third :");
    scanf("%d", &third->data);
    third->next = fourth;
    printf("Enter the data of fouth :");
    scanf("%d", &fourth->data);
    fourth->next = fifth;
    printf("Enter the data of fifth :");
    scanf("%d", &fifth->data);
    fifth->next = head; // This is a change..
    printf("Linklist before deletion :\n");
    linkedlistTraversal(head);
    printf("Linklist after deletion :\n");
    head = deletionatFirst(head);
    linkedlistTraversal(head);
}