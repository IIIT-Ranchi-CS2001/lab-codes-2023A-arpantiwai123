// Insertion code by Harry..
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
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
struct node* insertatFirst(struct node *head,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}
int main()
{
    struct node *head, *second, *third,*fourth;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    
    head->data = 7;
    head->next = second;
    
    second->data = 11;
    second->next = third;
    
    third->data = 15;
    third->next = fourth;
   
    fourth->data = 20;
    fourth->next = NULL;
   
    linkedlistTraversal(head);
    printf("\n\n");
    // Insertion at first..completed..
    head = insertatFirst(head ,56);
    linkedlistTraversal(head);
    return 0;

}