// Node Deletion in linkedlist..
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
struct node *deletionatBegin(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *deletionatIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next; // q p se age hoga..
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;// at last this the node jise delete krna hai..
    }
    p->next = q->next;
    free(q);
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
    fifth->next = NULL;
    // Deleting node in between..
    printf("Linked list before deletion :\n");
    linkedlistTraversal(head);
    printf("Linked list after the deletion :\n");
    head = deletionatIndex(head, 2); // updating the head;
    linkedlistTraversal(head);
}