 // insertion in between.. done by mee just an example not perfectly corrct..
#include<stdio.h>// for perfect we have to make another pointer variable..
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
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
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of head :");
    scanf("%d",&head->data);
    struct node* newnode1 = (struct node*)malloc(sizeof(struct node));
    head->next = newnode1;
    printf("Enter the data of newnode1 :");
    scanf("%d",&newnode1->data);
    newnode1->next = NULL;
    // insertion in between;
    struct node* ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of ptr :");
    scanf("%d",&ptr->data);
    ptr->next = head->next;
    head->next = ptr;
    linkedlistTraversal(head);
}