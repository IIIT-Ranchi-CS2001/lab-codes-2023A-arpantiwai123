// Insertion at the end..
// Circular linkedlist..Insertion
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
struct node *insertionatFirst(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head->next;
    ptr->data = val;

    while (p->next != head)
    {
        p = p->next;
    }
    // now p is at last node..
    p->next = ptr;
    ptr->next = head;
    head = ptr; // now ise hume first node krna hai..
    return head;
}
struct node *insertionatEnd(struct node *head, int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // node created..
    struct node *p = head->next;
    ptr->data = val;
    while (p->next != head)
    {
        p = p->next;
    }
    // now p is at last node..
    p->next = ptr;
    ptr->next = head;
    return head;
}
struct node *insertionatIndex(struct node *head, int val, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // node created..
    struct node* p = head;
    ptr->data = val;
    // us index ke pehle tk jao..
    for(int i=0;i<index-1;i++){
        p = p->next;
    }
    ptr->next  = p->next;
    p->next = ptr;
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
    printf("Linklist before insertion :\n");
    linkedlistTraversal(head);
    printf("Linklist after insertion :\n");
    head = insertionatIndex(head, 80, 2);
    linkedlistTraversal(head);
}