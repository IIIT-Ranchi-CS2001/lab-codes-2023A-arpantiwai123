// Circular linkedlist..
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
    linkedlistTraversal(head);
}